//
//  Sort.c
//  sort
//
//  Created by 이동영 on 19/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Sort.h"
#include "stdio.h"

void swap(int* a, int* b) {
    
    printf("swap!! %d %d\n",*a, *b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}

void bubbleSort(int array[], int n) {
    for(int i=n-1; i>=0; i--) {
        for(int j=0; j<i; j++) {
            if(array[j]>array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

