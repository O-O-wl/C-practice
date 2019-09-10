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
int main(int argc, const char * argv[]) {
    
//    LinkedListStack* stack = createStack();
//    push(stack, createNode("hello"));
//    push(stack, createNode("world"));
//    push(stack, createNode("c"));
//    push(stack, createNode("x-code"));
//    show(stack);
    
    char* expression = "33 * ( 31.04 + 4 )";
    int type = -1;
    int init = 0;
    int* start = &init;
    char* token = nextToken(expression, start, &type);
    printf("%s, %d\n",token,type);
    char* token2 = nextToken(expression, start, &type);
    printf("%s, %d\n",token2,type);
    char* token3 = nextToken(expression, start, &type);
    printf("%s, %d\n",token3,type);
    char* token4 = nextToken(expression, start, &type);
    printf("%s, %d\n",token4,type);
    char* token5 = nextToken(expression, start, &type);
    printf("%s, %d\n",token5,type);
    char* token6 = nextToken(expression, start, &type);
    printf("%s, %d\n",token6,type);
    char* token7 = nextToken(expression, start, &type);
    printf("%s, %d\n",token7,type);
    
    return 0;
}
