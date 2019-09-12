//
//  main.c
//  LinkedQueue
//
//  Created by 이동영 on 13/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "Queue.h"

int main(int argc, const char * argv[]) {
    LinkedQueue* queue = createQueue();
    dequeue(queue);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    enqueue(queue, 50);
    show(queue);
    printf("dequeued: %d\n",dequeue(queue));
    printf("dequeued: %d\n",dequeue(queue));
    printf("dequeued: %d\n",dequeue(queue));
    printf("dequeued: %d\n",dequeue(queue));
    printf("dequeued: %d\n",dequeue(queue));
    printf("dequeued: %d\n",dequeue(queue));
    return 0;
}
