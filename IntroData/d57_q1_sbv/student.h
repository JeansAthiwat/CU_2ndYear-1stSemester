#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
    //write your code here
    return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
    //write your code here
    return v.back();
}

template <typename T>
void CP::stack<T>::push(const T& element) {
    //write your code here
    v.push_back(element);
    v.resize(v.size());
}

template <typename T>
void CP::stack<T>::pop() {
    //write your code here
    v.resize(v.size()-1);
}

#endif
