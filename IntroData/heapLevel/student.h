#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
    //write your code here
    //can include anything
    std::vector<T> r;

    size_t strIndex = std::pow(2,k) -1;
    size_t endIndex = std::pow(2,k+1) - 1;
    while(strIndex < mSize && strIndex < endIndex) {
        r.push_back(mData[strIndex]);
        strIndex++;
    }
    std::sort(r.begin(),r.end(),std::greater<T>());
    return r;
}

#endif

