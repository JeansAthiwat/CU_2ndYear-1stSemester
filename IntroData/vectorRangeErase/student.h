#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "vector.h"
template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator,iterator>> &ranges) {
    int e[mCap+1] = {};

    for(auto &p : ranges) {
        e[p.first - begin()]++;
        e[p.second - begin()]--;
    }

    for(int i = 1 ; i < mSize; i++) {
        e[i] += e[i-1];
    }

    for(int i = size(); i>=0; i--) {
        if(e[i]>0) erase(begin() + i);
    }

}
#endif
