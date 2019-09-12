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
        else {
            if (*type == OPERAND) {
                break;
            }
            finish++;
            *type = OPERATOR;
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

char* convertToPostfix(char* infixExpression) {
    enum Type type = NONE;
    int start = 0;
    //  1 + 3.3334 / ( 4.26 * ( 110 - 7729 ) )
    //  1 3.3334 4.28 110 7729 -*/+
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
        
//        EOL = -1,
//        NONE = 0,
//        OPERAND = 1,
//        OPERATOR = 2,
//        WHITE_SPACE = 3,
//        OPEN_BRAKET = 4,
//        CLOSE_BRAKET = 5
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
    enum Type type = NONE;
    int start = 0;
    
    char* token = nextToken(postfixExpression, &start, &type);
    return 0;
}
