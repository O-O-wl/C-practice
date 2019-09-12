//
//  Queue.c
//  LinkedQueue
//
//  Created by 이동영 on 13/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Queue.h"
#include "stdlib.h"
#include "stdio.h"

Node* createNode(Element data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->nextNode = NULL;
    return newNode;
}
void destroyNode(Node* node) {
    if (node->nextNode != NULL) {
        free(node->nextNode);
    }
    free(node);
}

LinkedQueue* createQueue(void) {
    LinkedQueue* queue = (LinkedQueue*)malloc(sizeof(LinkedQueue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void destroyQueue(LinkedQueue* queue) {
    destroyNode(queue->front);
    free(queue);
}

void enqueue(LinkedQueue* queue, Element data) {
    Node* newNode = createNode(data);
    if (queue->front == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->nextNode = newNode;
        queue->rear = newNode;
    }
}

int isEmpty(LinkedQueue* queue) {
    return queue->front == NULL;
}

Element dequeue(LinkedQueue* queue) {
    if (isEmpty(queue)) {
        printf("큐가 비어있습니다.\n");
        return -1;
    } else {
        Node* dequeued = queue->front;
        queue->front = dequeued->nextNode;
        return dequeued->data;
    }
}


void show(LinkedQueue* queue) {
    Node* current = queue->front;
    while (current->nextNode != NULL) {
        printf("%d\n", current->data);
        current = current->nextNode;
    }
    printf("%d\n", current->data);
}
