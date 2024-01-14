#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b) {
    T* arr = new T[mSize + (b-a+1)];
    int starti = mSize - 1 - b;
    int endi = mSize - 1 - a; // included
    int arrIndex = 0;
    for(int i = 0 ; i < starti; i++) arr[arrIndex++] = mData[i];
    for(int i =starti ; i <= endi; i++) {
        arr[arrIndex++] = mData[i];
        arr[arrIndex++] = mData[i];
    }
    for(int i = endi + 1 ; i < mSize; i++) arr[arrIndex++] = mData[i];

    delete[] mData;
    mData = arr;
    mSize += b-a+1;
    mCap = mSize;
}

#endif
