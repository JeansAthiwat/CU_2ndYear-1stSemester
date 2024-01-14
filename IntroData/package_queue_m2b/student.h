#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
    //write your code here
    T vip = mData[(pos + mFront) % mCap];
    size_t last = (mSize - pos-mCap)%mCap;
    for(size_t i = 0; i < last; i++) {
    mData[(i + pos + mFront)%mCap] = mData[(i + pos + mFront + 1)%mCap];
    }
    mData[(mSize - 1 + mFront)% mCap] = vip;

}

#endif
