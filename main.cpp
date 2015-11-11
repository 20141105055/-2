//
//  main.cpp
//  动态存储2
//
//  Created by 20141105055ljm on 15/11/11.
//  Copyright (c) 2015年 20141105055ljm. All rights reserved.
//
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *a;
    a=(int *)malloc(4);
    *a=100;
    if(a==0)
        exit(0);
    printf("a=%x *a=%x\n",a,*a);
    return 0;
}
