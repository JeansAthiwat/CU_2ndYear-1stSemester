#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
    //your code here
    for(int i = 0; i < mSize; i++) {
        if(mData[i] == k) return true;
    }
    return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
    //your code here
    int i = mSize;
    bool isFound = false;
    while(i >= 0) {
        if(mData[i] == k) {
            isFound = 1;
            break;
        }
        i--;
    }

    if(!isFound) return -1;

    int n = 0;
    int num = 1;
    int depth = 0;

    if(i == 0) return 0;
    while(n < i) {
        n += num;
        num *= 2;
        depth += 1;
    }
    return depth-1;
}

#endif

