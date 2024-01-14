#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

namespace jeans {
template<typename T>
class vector {
  protected:
    T* mData;
    size_t mSize;
    size_t mCap;

    void rangeCheck(int index) {
        if((size_t) index >= mSize || index < 0) {
            throw std::out_of_range("nigga you outta range") ;
        }
    }
    void expand(cost size_t capacity) {
        T* arr = new T[capacity]();
        for(size_t i = 0; i < mSize; i++) {
            arr[i] = mData[i];
        }
        delete[] mData;
        mData = arr;
        mCap = capacity;
    }
    void ensureCapacity( size_t &capacity) {
        if(capacity > mCap) {
            size_t s = (capacity > 2*mCap) ? capacity : 2*mCap;
            expand(s);
        }

    }
  public:
    vector() {
        int cap =1;
        mData = new T[cap];
        mCap = cap;
        mSize = 0;
    }

    vector(size_t cap) {
        mData = new T[cap];
        mCap = cap;
        mSize = cap;
    }

    ~vector() {
        delete[] mData;
    }

    // methods -------------

    void push_back(const T& element) {
        ensureCapacity(mSize + 1);
        mData[mSize] = element;
    }

    &T at(int index) {
        rangeCheck(index);
        return mData[index];
    }

    &T operator[](int index) {
        return mData[index];
    }


};
}


#endif // VECTOR_H_INCLUDED
