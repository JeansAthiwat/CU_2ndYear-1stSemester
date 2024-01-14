#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
    //write something here
    if(idx < 0) {
        return mData[((mSize +idx) + mFront) % mCap];
    }
    return mData[((mCap + (size_t) idx) + mFront) % mCap];

}

#endif
