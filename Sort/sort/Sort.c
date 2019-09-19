//
//  Sort.c
//  sort
//
//  Created by 이동영 on 19/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include "Sort.h"
#include "stdio.h"
#include "stdlib.h"

void swap(int* a, int* b) {
    
//    printf("swap!! %d %d\n",*a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

void bubbleSort(int array[], int size) {
    for(int i=size-1; i>=0; i--) {
        for(int j=0; j<i; j++) {
            if(array[j]>array[j+1]) {
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void insertionSort(int array[], int size) {
    int target;
    for(int i=0; i<size; i++) {
        target = array[i];
        for (int j=i-1; j>=0; j--) {
            if (array[j] > target) {
                array[j+1] = array[j];
            }
            else {
                array[j+1] = target;
                break;
            }
        }
    }
}

int partition(int array[], int left, int right) {
    int first = left;
    int pivot = array[left++];
    
    while (left <= right) {
        while (array[left] < pivot && left <= right) {
            left++;
        }
        while (array[right] > pivot && left <= right) {
            right--;
        }
        if (left<right) {
            swap(&array[left], &array[right]);
        }
    }
    swap(&array[first], &array[right]);
    return right;
}

void quickSort(int array[], int left, int right) {
    
    if (left<right) {
        int index = partition(array, left, right);
        quickSort(array, left, index-1);
        quickSort(array, index+1, right);
    }
}
