#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
    //write your code here
    if(mSize != other.mSize) return false;
    CP::priority_queue<T,Comp> t = *this;
    CP::priority_queue<T,Comp> o = other;
    while(!t.empty()) {
        if(t.top() != o.top()) return false;
        t.pop();
        o.pop();
    }
    return true; // you can change this line
}

#endif
