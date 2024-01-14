#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
    //write your code here
    if(m <= 0) return false;
    if(!(a >= begin() && a+m-1 < end())) return false; // check a
    if(!(b >= begin() && b+m-1 < end())) return false; // check b
    if(!(a + m - 1 < b || b+m-1 < a )) return false; // check intersect

    for(size_t i = 0; i < m; i++,a++,b++) {
        std::swap(*a,*b);
    }
    return true;
}





#endif
