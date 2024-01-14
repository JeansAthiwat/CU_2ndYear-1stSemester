#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
    //write your code here
    std::sort(data.begin(),data.end());
    for(auto &x : data) {
        //std::cout << "(" << x.first << ":" << x.second <<"\n";
    }
    T* arr = new T[mSize + data.size()]();
    int arrIndex = 0;
    auto dataIt = data.begin();
    for(int mIndex = 0; mIndex < mSize; mIndex++,arrIndex++ ) {
        if((dataIt != data.end()) && (dataIt->first == mIndex)) {
            arr[arrIndex] = dataIt->second;
            arrIndex++;
            dataIt++;
            //std::cout << "if append: " << dataIt->second << "\n";
        }
        arr[arrIndex] = mData[mIndex];
        //std::cout << "append: " << mData[mIndex] << "\n";
    }
    while(dataIt != data.end()){
        arr[arrIndex] = dataIt->second;
        arrIndex++;
        dataIt++;
    }

    delete[] mData;
    mData = arr;
    mSize += data.size();
    mCap = mSize;

}

#endif
