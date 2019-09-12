//
//  Queue.h
//  Queue
//
//  Created by 이동영 on 12/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Queue_h
#define Queue_h
typedef int Element;

typedef struct tagNode {
    Element data;
} Node;

typedef struct tagQueue {
    int front;
    int rear;
    int capacity;
    Node* nodes;
} CirclearQueue;

Node* createNode(int data);
CirclearQueue* createQueue(int capacity);

void destroy(CirclearQueue* queue);

void enqueue(CirclearQueue* queue, Element data);
Element dequeue(CirclearQueue* queue);

int isEmpty(CirclearQueue* queue);
int isFull(CirclearQueue* queue);

void show(CirclearQueue* queue);


#endif /* Queue_h */
