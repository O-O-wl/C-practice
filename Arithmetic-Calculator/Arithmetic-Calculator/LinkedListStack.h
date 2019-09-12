//
//  LinkedListStack.h
//  Arithmetic-Calculator
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef LinkedListStack_h
#define LinkedListStack_h

// MARK: - Node
typedef struct tagNode {
    char* data;
    struct tagNode* nextNode;
} Node;

Node* createNode(char* data);

typedef struct tagStack {
    Node* top;
    Node* nodes;
    int count;
} LinkedListStack;

LinkedListStack* createStack(void);
void push(LinkedListStack* stack, Node* newNode);
Node* pop(LinkedListStack* stack);

void show(LinkedListStack* stack);

#endif /* LinkedListStack_h */
