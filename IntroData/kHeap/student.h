#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while(idx > 0) {
        size_t parent = (idx-1)/4;
        if(mLess(tmp,mData[parent])) break;
        mData[idx] = mData[parent];
        idx = parent;
    }
    mData[idx] = tmp;
}



template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t child;

    while((child = 4*idx+1) < mSize) {
        size_t tmpIndex = child;
        if(tmpIndex+1 < mSize && mLess(mData[child],mData[tmpIndex+1])) child = tmpIndex+1;
        if(tmpIndex+2 < mSize && mLess(mData[child],mData[tmpIndex+2])) child = tmpIndex+2;
        if(tmpIndex+3 < mSize && mLess(mData[child],mData[tmpIndex+3])) child = tmpIndex+3;


        /*if( mLess(mData[child],mData[child+1])) {
            child++;
            if(child+1 < mSize && mLess(mData[child],mData[child+1])) {
                child++;
                if(child+1 < mSize && mLess(mData[child],mData[child+1])) {
                    child++;
                }
            }
        }*/
        if(mLess(mData[child],tmp)) break;
        mData[idx] = mData[child];
        idx = child;
    }
    mData[idx] = tmp;
}

#endif

