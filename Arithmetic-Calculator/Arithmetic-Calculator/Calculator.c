//
//  Calculator.c
//  Arithmetic-Calculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Calculator.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
//char* convertToPostfix(char* infixExpression) {
//    int depth = 0;
//}
//double calculate(char* postfixExpression);
const int OPERAND = 1;
const int OPERATOR = 2;
const int SEPARATOR = 3;

char* nextToken(char* expression, int *start, int *type) {
    *type = -1;
    int finish = *start;
    while(1) {
        char c = expression[finish];
        if (isNumber(c)) {
            finish++;
            *type = OPERAND;
            continue;
        }
        else if (c == ' ') {
            if (*type == OPERAND) { break ; }
            finish++;
            *type = SEPARATOR;
            break;
        }
        else {
            if (*type == OPERAND) { break ; }
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
    ++finish;
    *start = finish;
    return token;
}
int isNumber(char c) {
    char number[] = {'1','2','3','4','5','6','7','8','9','0','.'};
    for(int i = 0; i<sizeof(number); i++) {
        if (number[i] == c) { return 1; }
    }
    return 0;
}
char* convertToPostfix(char* infixExpression);
double calculate(char* postfixExpression);
