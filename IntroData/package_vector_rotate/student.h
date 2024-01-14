#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
    //write your code here
    size_t len = last-first;
    k %= len; // normalize k to be less than length
    size_t fi = first - mData;
    T arr[k];
    for(int i = 0; i < k; i++) arr[i] = mData[i + fi];
    for (auto &x : *this) std::cout << x << " ";std::cout << " \n";
    for(int i = 0 ; i<len-k; i++) {
        mData[i+fi] = mData[i+k + fi];
        for (auto &x : *this) std::cout << x << " ";std::cout << " \n";
    }std::cout << " \n";

    for(int i = 0; i < k; i++) {
        mData[i + len - k +fi] = arr[i];
        for (auto &x : *this) std::cout << x << " ";std::cout << " \n";
    }
    std::cout << " \n";

}

#endif
