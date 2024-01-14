#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"
#include <functional>
template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
    // Your code here

    std::function<bool(const size_t &)> checkChildren = [&](const size_t &index) -> bool {
        size_t leftChild = index * 2 + 1;
        size_t rightChild = index * 2 + 1 + 1;
        if (leftChild < mSize) {
            if (mLess(mData[index],mData[leftChild])) return false;
        }
        if (rightChild < mSize) {
            if (mLess(mData[index],mData[rightChild])) return false;
        }
        return true;
    };

    std::function<bool(const size_t &)> sheesh = [&](const size_t &index) -> bool {
        if(!checkChildren(index)) return false;
        size_t leftChild = index * 2 + 1;
        size_t rightChild = index * 2 + 1 + 1;
        if (leftChild < mSize) {
            if (!checkChildren(leftChild)) return false;
            sheesh(leftChild);
        }
        if (rightChild < mSize) {
            if (!checkChildren(rightChild)) return false;
            sheesh(rightChild);
        }

        return true;
    };

    // Return something
    return sheesh(0);
}

#endif
/*    bool checkChildren(const size_t &index) {
        size_t leftChild = index*2 +1;
        size_t rightChild= index*2 +1 + 1;
        if(leftChild < mSize) {
            if(mData[leftChild] > mData[index]) return false;
        }
        if(rightChild < msize) {
            if(mData[rightChild] > mData[index]) return false;
        }
        return true;
    }

    bool sheesh(const size_t &index) {
        size_t leftChild = index*2 +1;
        size_t rightChild= index*2 +1 + 1;
        if(leftChild < mSize) {
            if(!checkChildren(leftChild)) return false;
            sheesh(leftChild);
        }
        if(rightChild < msize) {
            if(!checkChildren(rightChild)) return false;
            sheesh(rightChild);
        }

        return true;
    }*/
