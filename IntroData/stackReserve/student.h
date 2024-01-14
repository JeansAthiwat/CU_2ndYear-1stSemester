#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int reserve = mCap - mSize;
    int other_reserve = other.mCap - other.mSize;

    if(reserve < other_reserve) return -1;
    if(reserve == other_reserve) return 0;
    if(reserve > other_reserve) return 1;
}

#endif
