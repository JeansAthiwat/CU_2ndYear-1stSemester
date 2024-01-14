#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
    //your code here
    for(int i = 0 ; i < (b-a+1)/2 ; i++) {
        int s = (mFront+a+i)%mCap;
        int e = (mFront+b+mCap-i)%mCap;
        std::swap(mData[s],mData[e]);
    }
}

#endif
