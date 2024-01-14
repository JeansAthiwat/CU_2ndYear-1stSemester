#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    //write your code here

    int newSize = mSize - pos.size();
    T* arr = new T[newSize];
    int tmp_i = 0;
    int posIndex = 0;

    for(int i=0; i < mSize; i++) {
        if(posIndex < pos.size() && pos[posIndex] == i) {
            posIndex++;
            continue;
        }
            arr[tmp_i] = mData[i];
            tmp_i++;
    }
    delete[] mData;
    mData = arr;
    mSize = (size_t) newSize;
    //mCap = (size_t) newSize;

}

#endif
