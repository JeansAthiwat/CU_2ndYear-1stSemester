#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos,Comp comp) const {
    //your code here

    bool foundFirst = false;
    T minElement;
    for(size_t i = 0; i < pos.size() ; i++) {
        if((pos[i]) >= mSize) {
            continue;
        }

        T currentElement = mData[(mFront + pos[i]) % mCap];
        if(!foundFirst) {
            minElement = currentElement;
            foundFirst = true;
        } else {
            if(comp(currentElement,minElement)) { // if currentElement < minElement
                minElement = currentElement;
            }
        }
    }
    //should return something
    return minElement;
}

#endif
