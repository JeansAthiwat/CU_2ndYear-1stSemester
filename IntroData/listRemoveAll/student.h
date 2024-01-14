#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last) {
    // write your code here
    if(first >= last || first >= mSize-1 || mSize <= 1) return;
    if(first >= last ) return;



    while(last > first){
        std::swap(mData[mSize -1 - last],mData[mSize -1 - first]);
        last++;
        first--;
    }
}

#endif
