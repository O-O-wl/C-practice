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
    
    int array[] = {44,33,14,1,25,99,41,101,2};
    int size = (sizeof array / sizeof array[0]);
    
    for(int i=0;i<size;i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    quickSort(array, 0, size-1);
    for(int i=0;i<size;i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
