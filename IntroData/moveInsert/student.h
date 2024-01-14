#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
    CP::stack<T> pringles;
    while(k-- && !empty()) {
        pringles.push(top());
        pop();
    }
    while(m-- && !s2.empty()) {
        pringles.push(s2.top());
        s2.pop();
    }
    while(!pringles.empty()) {
        push(pringles.top());
        pringles.pop();
    }
}
#endif
