#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
    CP::list<T> result; //empty list with mHeader

    if(it != end()) {
        it.ptr->prev->next = mHeader;
        mHeader->prev->next = result.mHeader;

        result.mHeader->prev = mHeader->prev;
        result.mHeader->next = it.ptr;

        mHeader->prev = it.ptr->prev;
        it.ptr->prev = result.mHeader;

        result.mSize = mSize - pos;
        mSize = pos;
    }

    return result;
}

#endif
