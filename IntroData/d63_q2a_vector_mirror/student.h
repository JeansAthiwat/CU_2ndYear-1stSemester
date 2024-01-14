#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  T* arr = new T[mSize*2];
  for(int i = 0; i< mSize; i++) arr[i] = mData[i];
  for(int i = mSize ; i < 2*mSize ; i++) arr[i] = mData[(2*mSize-i)-1];

  delete[] mData;
  mData = arr;
  mSize *= 2;
  mCap = mSize;
}

#endif
