//
//  Calculator.c
//  PostfixCalculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Calculator.h"
#include "string.h"
#include "Stack.h"

double calculate(char* postfixExpression) {
    long length = strlen(postfixExpression);
    int i = 0;
    Stack *operand = createStack(length);
    int operand1;
    int operand2;
    
    while (i < length) {
        char popped = postfixExpression[i];
        i++;
        switch (popped) {
            case '+':
                operand2 = (int)(pop(operand)-48);
                operand1 = (int)(pop(operand)-48);
                
                printf("%d + %d = %d\n", operand1, operand2, operand1 + operand2);
                push(operand, (char)((operand1 + operand2)+48));
                break;
            case '-':
                operand2 = (int)(pop(operand)-48);
                operand1 = (int)(pop(operand)-48);
                printf("%d - %d = %d\n", operand1, operand2, operand1 - operand2);
                push(operand, (char)((operand1 - operand2)+48));
                break;
            case '*':
                operand2 = (int)(pop(operand)-48);
                operand1 = (int)(pop(operand)-48);
                
                printf("%d * %d = %d\n", operand1, operand2, operand1 * operand2);
                push(operand, (char)((operand1 * operand2)+48));
                break;
            case '/':
                operand2 = (int)(pop(operand)-48);
                operand1 = (int)(pop(operand)-48);
                
                printf("%d / %d = %d\n", operand1, operand2, operand1 / operand2);
                push(operand, (char)((operand1 / operand2)+48));
                break;
            default:
                push(operand, popped);
                break;
        }
    }
    
    return pop(operand)-48;
}
