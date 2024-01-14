#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
    //write your code here
    K = (K > mSize) ? mSize : K;
    mSize -= K;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
    //write your code here
    K = (K > mSize) ? mSize : K;
    std::stack<T> outStack;
    size_t index = mSize - K;
    for(size_t i = index; i < mSize; i++) {
        outStack.push(mData[i]);
    }
    mSize -= K;

    return outStack;
        //don't forget to return an std::stack
}

#endif
