#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
    // mData = begining of iterator
    int index = it - mData;
    if(index < 0 || index >= mSize) return false;

    return true;

}

#endif
