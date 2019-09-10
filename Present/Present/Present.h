//
//  Present.h
//  Present
//
//  Created by 이동영 on 10/09/2019.
//  Copyright © 2019 부엉이. All rights reserved.
//

#ifndef Present_h
#define Present_h
typedef unsigned char *bytePointer;

void showBytes(bytePointer start, int size);
void showInt(int x);
void showFloat(float x);
void showPointer(void *x);
#endif /* Present_h */
