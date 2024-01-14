#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
    //write your code here
    if(mSize == 0 || a==b) return;

    std::vector<iterator> tmp;
    for(iterator it = a; it != b; it++) {
        if(*it == value)
            tmp.push_back(it);
    }

    for(iterator &it : tmp) {
        //fix node before it
        //fix node after it //ทำให้ข้าม
        it.ptr->prev->next = it.ptr->next;
        it.ptr->next->prev = it.ptr->prev;
        //move it to front of output by...
        //..it.prev to output.mHEader
        //..it.next to output.mHeader->next
        //..fix header and the now second element
        it.ptr->prev = output.mHeader;
        it.ptr->next = output.mHeader->next;

        output.mHeader->next->prev = it.ptr;
        output.mHeader->next = it.ptr;
        mSize--;
        output.mSize++;
    }

}

#endif
