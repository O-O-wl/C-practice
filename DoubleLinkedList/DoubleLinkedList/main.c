//
//  main.c
//  DoubleLinkedList
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "DoubleLinkedList.h"

int main(int argc, const char * argv[]) {
    
    Node* list = NULL;
    Node* node2 = createNode(4);
    appendNode(&list, createNode(3));
    appendNode(&list, node2);
    appendNode(&list, createNode(5));
    print(list);
    printf("=====================\n");
    removeNode(&list, list);
    print(list);
    return 0;
}
