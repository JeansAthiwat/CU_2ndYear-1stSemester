#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
    //write your code here
    if(mSize == 0 || a==b) return a;

    std::vector<iterator> tmp;
    for(iterator it = a; it != b; it++) {
        tmp.push_back(it);
    }
    iterator out = b.ptr->prev;
    b.ptr->prev->next = a.ptr->prev;
    a.ptr->prev->next = b.ptr->prev;
    a.ptr->prev = b.ptr;
    b.ptr->prev = a.ptr;

    for(iterator &it : tmp) {
        std::swap(it.ptr->next,it.ptr->prev);
    }

    return out;
}

#endif
