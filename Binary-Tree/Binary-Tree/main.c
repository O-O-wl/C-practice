//
//  main.c
//  Binary-Tree
//
//  Created by 이동영 on 16/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "BinaryTree.h"

int main(int argc, const char * argv[]) {
    Node* A = createNode('A');
    
    Node* B = createNode('B');
    Node* C = createNode('C');
    Node* D = createNode('D');
    
    Node* E = createNode('E');
    Node* F = createNode('F');
    Node* G = createNode('G');
    
    A->left=B;
    B->left=C;
    B->right=D;
    A->right=E;
    E->left=F;
    E->right=G;
    printf("======== 전위 탐색 =======\n");
    printPreOrder(A);
    printf("\n========================\n");
    
    printf("======== 중위 탐색 =======\n");
    printInOrder(A);
    printf("\n========================\n");
    
    printf("======== 후위 탐색 =======\n");
    printPostOrder(A);
    printf("\n========================\n");
    
    
    
    printf("======== 수식 전위 탐색 =======\n");
    Node* A2 = createNode('*');
    
    Node* B2 = createNode('+');
    Node* C2 = createNode('1');
    Node* D2 = createNode('2');
    
    Node* E2 = createNode('-');
    Node* F2 = createNode('5');
    Node* G2 = createNode('2');
    A2->left=B2;
    B2->left=C2;
    B2->right=D2;
    A2->right=E2;
    E2->left=F2;
    E2->right=G2;
    printInOrder(A2);
    printf("\n");
    printf("======== 수식 후위 탐색 =======\n");
    
    printPostOrder(A2);
    printf("\n");
    return 0;
}
