#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
    //write your code here
    for(auto it = ls.begin(); it != ls.end(); ++it) {
        //std::cout << "sizeCheck:" << it->mSize << std::endl;
        if(it->mSize != 0) {
            // edit other first member prev
            // edit other last member next
            it->mHeader->next->prev = mHeader->prev;
            it->mHeader->prev->next = mHeader;
            //edit this first member prev
            // edit this last member next
            mHeader->prev->next = it->mHeader->next;
            mHeader->prev = it->mHeader->prev;
            // edit other mHeader prev and next to point to tua eng
            it->mHeader->next = it->mHeader;
            it->mHeader->prev = it->mHeader;
            mSize += it->mSize;
            it->mSize = 0;
        }
    }

}
/*
3 2
111 222 333
2 0 1
3 2 3 4

*/
#endif
