#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
    //your code here
    int posX = std::upper_bound(aux.begin(),aux.end(),idx) - aux.begin() -1 ;
    int posY = idx - aux[posX]; // aux[posX] is the first index of the next Y dimension
    return mData[posX][posY];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
    //your code here
    //you MAY need this function
    if(aux.size() < 1) {
        aux.push_back(0);
    }
    aux.push_back(aux[aux.size() - 1] + mData.back().size() );   // aux keeping min index  index of that previous vector
    // [0,1,2] [3,4,5,6,7]
    // 0 3 8 use upper bound -1 to get da index of the first dimension

}

#endif
