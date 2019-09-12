//
//  Queue.c
//  Queue
//
//  Created by 이동영 on 12/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Queue.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"


Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    return newNode;
}

CirclearQueue* createQueue(int capacity) {
    CirclearQueue* queue = (CirclearQueue*)malloc(sizeof(CirclearQueue));
    
    queue->capacity = capacity;
    queue->front = 0;
    queue->rear = 0;
    queue->nodes = (Node*)malloc(sizeof(Node) * (capacity+1));
    
    return queue;
}

void destroy(CirclearQueue* queue) {
    free(queue->nodes);
    free(queue);
}

void show(CirclearQueue* queue) {
    for(int i=0;i<queue->rear;i++) {
        printf("%d\n",(queue->nodes[i]).data);
    }
}

void enqueue(CirclearQueue* queue, Element data) {
    Node* newNode = createNode(data);
    if (isFull(queue)) {
        printf("큐가 가득찼습니다.\n");
        return;
    }
    queue->nodes[queue->rear++] = *newNode;
}

Element dequeue(CirclearQueue* queue) {
    if (isEmpty(queue)) {
        printf("큐가 비었습니다.\n");
        return -1;
    }
    Element dequeued = queue->nodes[queue->front++].data;
    return dequeued;
}

int isEmpty(CirclearQueue* queue) {
    return (queue->front == queue->rear);
}

int isFull(CirclearQueue* queue) {
    int distance = (queue->front + queue->capacity)%(queue->capacity+1);
    return distance == queue->rear;
}
