//
//  Queue.h
//  LinkedQueue
//
//  Created by 이동영 on 13/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

typedef int Element;

typedef struct tagNode {
    Element data;
    struct tagNode* nextNode;
} Node;

Node* createNode(Element data);
void destroyNode(Node* node);

typedef struct tagQueue {
    Node* front;
    Node* rear;
} LinkedQueue;

LinkedQueue* createQueue(void);
void destroyQueue(LinkedQueue* queue);

void enqueue(LinkedQueue* queue, Element data);
Element dequeue(LinkedQueue* queue);
int isEmpty(LinkedQueue* queue);
void show(LinkedQueue* queue);
#endif /* Queue_h */
