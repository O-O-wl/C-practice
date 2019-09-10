//
//  Converter.c
//  PostfixToInfix
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Converter.h"
#include "Stack.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
// 2 * (1 + 3)
// 21*3+
// 213+*

char* convertToPostfix(char* infixExpression) {
    
    int length = (int)strlen(infixExpression);
    Stack* operator = createStack(length);
    
    char* postfixExpresson = (char*)malloc(length);
    int capacity = 0;
    int keep = 0;
    for(int i=0; i<length; i++) {
        char c = infixExpression[i];
        if (c == NULL) { break; }
        switch (c) {
            case '+':
                push(operator, '+');
                break;
            case '-':
                push(operator, '-');
                break;
            case '*':
                push(operator, '*');
                break;
            case '/':
                push(operator, '/');
                break;
            case '(':
                keep = 1;
                break;
            case ')':
                keep = 0;
                while (operator->top > 0) {
                    postfixExpresson[capacity++] = pop(operator);
                }
                break;
            default:
                postfixExpresson[capacity++] = c;
                if (operator->top > 0 && keep == 0) {
                    postfixExpresson[capacity++] = pop(operator);
                }
                break;
        }
    }
    return postfixExpresson;
}
