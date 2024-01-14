#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> out;
    std::map<T,int> countT;
    for(int i = 0; i < mSize; i++) {
        countT[mData[(i+mFront)%mCap]]++;
    }
    for(int i = 0; i<k.size(); i++) {
        out.push_back({k[i],countT[k[i]]});
    }
    return out;
}

#endif
