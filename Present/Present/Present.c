//
//  Present.c
//  Present
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Present.h"
#include "stdio.h"

void showBytes(bytePointer start, int size) {
    for(int i = 0; i < size ; i++) {
        printf("%.2x ", start[i]);
    }
    printf("\n");
}
void showInt(int x) {
    showBytes((bytePointer)&x, sizeof(int));
}
void showFloat(float x) {
    showBytes((bytePointer)&x, sizeof(float));
}
void showPointer(void *x) {
    showBytes((bytePointer)&x, sizeof(void));
}
