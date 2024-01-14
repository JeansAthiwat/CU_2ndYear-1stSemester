#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
    //write your code here
    int newSize = mSize + (last - first);

    T* arr = new T[newSize](); // create new array for the new mData
    int arrIdx = 0;
    int posIndex = (position - begin());
    for(int i = 0; i < posIndex; i++,arrIdx++) arr[arrIdx] = mData[i];
    /*std::cout << arrIdx << "\n";
    std::cout << "arr:";
    for(int i = 0; i < mSize; i++) {
        std::cout <<  arr[i] <<" ";
    }
    std::cout  << "\n:";*/

    for(auto it = first; it < last ; it++,arrIdx++) {
        arr[arrIdx] = *it;
        /*std::cout << "arr:";
        for(int i = 0; i < mSize; i++) {
            std::cout <<  arr[i] <<" ";
        }
        std::cout << "\n:";*/
    }
    for(int i = posIndex; i < mSize; i++,arrIdx++) {
        //std::cout << "i :" << i << "=" << mData[i] << "\n";
        arr[arrIdx] = mData[i];
        /*std::cout << "arrIdx :" << arrIdx << "=" << arr[arrIdx] << "\n";

        std::cout << "arr:";
        for(int i = 0; i < mSize; i++) {
            std::cout <<  arr[i] <<" ";
        }
        std::cout << "\n:";*/
    }

    delete[] mData;
    mData = arr;

    mCap = newSize;
    mSize = newSize;
}

#endif
