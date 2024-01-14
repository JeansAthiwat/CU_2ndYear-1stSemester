#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
    //write your code here
    int vecSize = mSize/k;
    int totalBigger = mSize%k;
    std::vector<std::vector<T> > outVec;
    int sIndex = mSize - 1;
    while(sIndex >= 0) {
        std::cout << "sex \n";
        std::vector<T> tmpV;
        int currentSize = vecSize;
        if(totalBigger > 0) {
            currentSize++;
            totalBigger--;
        }
        for(int i = 0; i < currentSize; i++) {
            tmpV.push_back(mData[sIndex--]);
        }
        outVec.push_back(tmpV);
    }
    return outVec;

}
#endif
