//
//  main.c
//  sort
//
//  Created by 이동영 on 19/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "Sort.h"

int main(int argc, const char * argv[]) {
    int array[] = {1,44,33,14,25};
    
    for(int i=0;i<5;i++) {
        printf("%d ",array[i]);
    }
    
    bubbleSort(array, 5);
    
    for(int i=0;i<5;i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
