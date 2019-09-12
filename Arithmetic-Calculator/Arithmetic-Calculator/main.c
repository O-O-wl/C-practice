//
//  main.c
//  Arithmetic-Calculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "LinkedListStack.h"
#include "Calculator.h"
#include "string.h"
int main(int argc, const char * argv[]) {
    
    //    LinkedListStack* stack = createStack();
    //    push(stack, createNode("hello"));
    //    push(stack, createNode("world"));
    //    push(stack, createNode("c"));
    //    push(stack, createNode("x-code"));
    //    printf("%s\n",pop(stack)->data);
    //    printf("%s\n",pop(stack)->data);
    //    printf("%s\n",pop(stack)->data);
    //    printf("%s\n",pop(stack)->data);
    
    char* expression = "1 + 3.3334 / ( 4.26 * ( 110 - 7729 ) )";
    char* postfix = convertToPostfix(expression);
    printf("%s\n",postfix);
    printf("1  3.3334   4.26   110  7729  -*/+\n");
    
    char* expression2 = "3 + (3 * 2) + 5";
    char* postfix2 = convertToPostfix(expression2);
    printf("%s\n",postfix2);
    printf("3 3 2 * + 5 +\n");
    
    char* ee  = "3 3 2 * + 5 +";
    double r = calculate(ee);
    printf("%f\n", r);
    return 0;
    
}
