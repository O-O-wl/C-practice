//
//  main.c
//  LCRS-Tree
//
//  Created by 이동영 on 15/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "Tree.h"

int main(int argc, const char * argv[]) {
    Node* root = createNode('A');
    Node* B = createNode('B');
    Node* C = createNode('C');
    Node* D = createNode('D');
    Node* E = createNode('E');
    Node* F = createNode('F');
    Node* G = createNode('G');
    Node* H = createNode('H');
    Node* I = createNode('I');
    appendChildren(root, B);
    appendChildren(B, C);
    appendChildren(B, D);
    appendChildren(C, E);
    appendChildren(E, F);
    appendChildren(root, G);
    appendChildren(G, H);
    appendChildren(G, I);
    print(root, 0);
    return 0;
}
