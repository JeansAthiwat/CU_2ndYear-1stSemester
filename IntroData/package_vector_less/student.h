#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
    //write your code here
    // if you use std::vector, your score will be half (grader will report score BEFORE halving)
    int mFront = 0;
    while(mFront < mSize && mFront < other.mSize) {
        if(mData[mFront] < other.mData[mFront] ) {
            return true;
        } else if(mData[mFront] == other.mData[mFront]) {
            mFront++;
            std::cout << "hey " << mFront << " \n";
        } else {
            return false;
        }
    }
    if(mFront < other.size()) {
        return true;
    }
    return false;

}

#endif
