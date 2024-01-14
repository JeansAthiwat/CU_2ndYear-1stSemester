#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
#include<iostream>
#include<set>
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
    std::set<T> seen;
    CP::vector<T> tmp;

    for(int i=0; i < mSize; i++) {
        if(seen.find(mData[i]) == seen.end()) {
            tmp.push_back(mData[i]);
            seen.insert(mData[i]);
        }
    }
    std::swap(mData,tmp.mData);
    std::swap(mCap,tmp.mCap);
    std::swap(mSize,tmp.mSize);
    //do someting here
}

#endif
