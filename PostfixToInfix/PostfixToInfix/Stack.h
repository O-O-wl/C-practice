//
//  Stack.h
//  PostfixToInfix
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

typedef struct tagStack {
    char* data;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity);
void push(Stack* stack, char data);
char pop(Stack* stack);
void show(Stack* stack);
#endif /* Stack_h */
