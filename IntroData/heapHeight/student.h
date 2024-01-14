#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
    //write your code here
    int height = 0;
    if(mSize == 0) {
        height = -1;
    } else if(mSize == 1) {
        height = 0;
    } else {
        int totalElem = mSize;
        int num = 1;
        //std::cout << "totalElem" << totalElem << "\n";
        while(totalElem > 0) {
            totalElem -= num;
            num *= 2;
            height++;
        }
        height--;
    }

    return height; // or return (int)log2(mSize); after check msize == 0
}

#endif

