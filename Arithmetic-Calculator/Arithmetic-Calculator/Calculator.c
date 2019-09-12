//
//  Calculator.c
//  Arithmetic-Calculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Calculator.h"
#include "string.h"
#include "LinkedListStack.h"
#include "stdio.h"
#include "stdlib.h"

char* nextToken(char* expression, int *start, enum Type *type) {
    *type = EOL;
    int finish = *start;
    
    if (*start > strlen(expression)) {
        char fail = ' ';
        return &fail;
    }
    while(1) {
        char c = expression[finish];
        if (isNumber(c)) {
            finish++;
            *type = OPERAND;
            continue;
        }
        else if (c == ' ') {
            if (*type == OPERAND) {
                break;
            }
            finish++;
            *type = WHITE_SPACE;
            break;
        }
        else if ( c == '(') {
            if (*type == OPERAND) {
                break;
            }
            finish++;
            *type = OPEN_BRAKET;
            break;
        }
        else if ( c == ')') {
            if (*type == OPERAND) {
                break;
            }
            finish++;
            *type = CLOSE_BRAKET;
            break;
        }
        else if (isOperator(c)) {
            if (*type == OPERAND) {
                break;
            }
            finish++;
            *type = OPERATOR;
            break;
        }
        else {
            if (*type == OPERAND) {
                break;
            }
            finish++;
            *type = NONE;
            break;
        }
    }
    char* token = (char*)malloc(finish - (*start));
    int j = 0;
    for(int i = *start; i<finish; i++) {
        token[j++] = expression[i];
    }
    *start = *type == OPERAND ? finish : finish++;
    return token;
}

int isNumber(char c) {
    char number[] = {'1','2','3','4','5','6','7','8','9','0','.'};
    for(int i = 0; i<sizeof(number); i++) {
        if (number[i] == c) { return 1; }
    }
    return 0;
}

int isOperator(char c) {
    char operator[] = {'+','-','*','/'};
    for(int i = 0; i<sizeof(operator); i++) {
        if (operator[i] == c) { return 1; }
    }
    return 0;
}

char* convertToPostfix(char* infixExpression) {
    enum Type type = NONE;
    int start = 0;
    int contextDepth = 0;
    int len = (int)strlen(infixExpression) * sizeof(char);
    printf("길이 : %d, %s\n", len, infixExpression);
    char* result = (char*)malloc(len);
    LinkedListStack *operators = createStack();
    Node* operator;
    int tokenLen = 0;
    int index = 0;
    while (type != EOL) {
        char* token = nextToken(infixExpression, &start, &type);
        
        switch (type) {
            case EOL:
                break;
            case NONE:
                break;
            case OPERAND:
                tokenLen = (int)strlen(token);
                for(int i=0;i<tokenLen;i++) {
                    result[index++] = token[i];
                }
                break;
            case OPERATOR:
                operator = createNode(token);
                push(operators, operator);
                break;
            case WHITE_SPACE:
                result[index++] = *token;
                break;
            case OPEN_BRAKET:
                contextDepth++;
                break;
            case CLOSE_BRAKET:
                contextDepth--;
                
                break;
        }
    }
    
    while (operators->count > 0) {
        operator = pop(operators);
        char* data = operator->data;
        int operatorLen = (int)strlen(data);
        for(int i=0;i<operatorLen;i++) {
            result[index++] = data[i];
        }
    }
    return result;
}

double calculate(char* postfixExpression) {
    printf("%s\n",postfixExpression);
    enum Type type = NONE;
    int start = 0;
    char operator;
    int len = (int)strlen(postfixExpression);
    LinkedListStack* operands = createStack();
    double operand1,operand2, tempResult;
    char result[20];
    Node* newNode;
    while (len>start) {
        char* token = nextToken(postfixExpression, &start, &type);
        
        printf("token: %s, type: %d\n",token, type);
        switch (type) {
            case OPERAND:
                newNode = createNode(token);
                printf("push: %s \n",token);
                push(operands, newNode);
                break;
            case OPERATOR:
                operator = *token;
                
                printf("%c\n",operator);
                if (operands->count == 0 ) { break; }
                operand2 = atof(pop(operands)->data);
                operand1 = atof(pop(operands)->data);
                printf("pop op1: %f \n",operand1);
                printf("pop op2: %f \n",operand2);
                switch (operator) {
                    case '+':
                        tempResult = operand1 + operand2;
                        break;
                    case '-':
                        tempResult = operand1 - operand2;
                        break;
                    case '*':
                        tempResult = operand1 * operand2;
                        break;
                    case '/':
                        tempResult = operand1 / operand2;
                        break;
                    default:
                        break;
                }
                printf("결과 push: %f \n", tempResult);
                sprintf(result, "%f", tempResult);
                push(operands, createNode(result));
                
                
                break;
            default:
                break;
        }
    }
    return atof(pop(operands)->data);
}
