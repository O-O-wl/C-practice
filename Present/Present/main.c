//
//  main.c
//  Present
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#include <stdio.h>
#include "Present.h"

int main(int argc, const char * argv[]) {
    char* string = "ㅌ";
    showBytes(string, 6);
    //ed 83 80 00 25 2e 타
    //e3 85 8c e3 85 8f ㅌㅏ
    //e3 85 8c 00 25 2e ㅌ
    return 0;
}
