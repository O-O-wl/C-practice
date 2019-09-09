//
//  Stack.h
//  Stack
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Stack_h
#define Stack_h
#include <stdlib.h>
#include <stdio.h>

typedef struct tagNode {
    int data;
} Node;

typedef struct tagStack {
    int top;   // 최상위 노드의 위치 추가될 다음 인덱스
    int capacity; // 용량
    Node* nodes; // 노드의 배열
} Stack;

Node* createNode(int data);

Stack* createStack(int capacity);
void destroyStack(Stack* stack);

void push(Stack* stack, int data);
int pop(Stack* stack);

int isEmpty(Stack* stack);
int count(Stack* stack);


#endif /* Stack_h */
