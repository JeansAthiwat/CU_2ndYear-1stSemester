#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
    //your code here
    std::vector<std::vector<T> > vecOut(k);
    int normalS = mSize/k;
    int fraction = mSize - normalS*k;
    //std::cout << normalS << ":" << fraction << "\n";

    for(int x = 0 ; x < k ; x++) {
        int curSize = normalS;
        if(fraction > 0) {
            curSize++;
            fraction--;
        }
        int start = mSize -1-x ;
        std::vector<T> tmpVec(curSize);
        for(int i = 0; i < curSize; i++) {
            tmpVec[curSize-1-i] = mData[start - (i*k)];
        }
        vecOut[x] = tmpVec;
    }
        return vecOut;
    //should return something
}

#endif

