#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
    //write your code ONLY here
    CP::stack<T> tmp;
    mSize = 0;
    while(first != last) {
        tmp.push(*first);
        mSize++;
        first++;
    }
    mData = new T[mSize];
    for(int i =0; i < mSize; i++) {
        mData[i] = tmp.top();
        tmp.pop();
    }
    mCap = mSize;

}

#endif
