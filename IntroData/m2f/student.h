#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    //size_t indexOfPos = (index + mFront) % mCap;
    T vip = mData[(pos + mFront) % mCap];
    while(pos != 0) {
        mData[(pos + mFront)%mCap] = mData[(pos + mFront -1)%mCap];
        pos--;
    }
    mData[mFront] = vip;
}

#endif
