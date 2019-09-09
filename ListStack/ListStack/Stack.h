//
//  Stack.h
//  ListStack
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

typedef struct tagNode {
    int data;
    struct tagNode* nextNode;
} Node;

Node* createNode(int data);

typedef struct tagStack {
    Node* top;
    Node* head;
} Stack;

Stack* createStack(void);
void push(Stack* stack, int data);
int pop(Stack* stack);
#endif /* Stack_h */
