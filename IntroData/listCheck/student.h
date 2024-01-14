#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
    //your code here
    if(mHeader->next == NULL || mHeader->prev == NULL) return false;
    iterator it(mHeader);
    node* prevNode;

    if(it.ptr == NULL) {
        return false;
    }

    //iterate mSize time if it doenst reach end() then its wong
    for(int i = 0 ; i < mSize ; i++) {
        prevNode = it.ptr;
        it++;
        //std::cout << "Node " << i << ": " << *it;
        //std::cout << " (prev = " << it.ptr->prev << ", I'm at " << it.ptr << ", next = " << it.ptr->next << ")" <<  std:: endl;
        /*if(it.ptr == NULL) {
            return false;
        }*/

        if(i != mSize-1 && it.ptr == mHeader) {
            //std::cout << "Norway " << std::endl;
            return false;
        }
        if(it.ptr->next == NULL or it.ptr->prev == NULL or it.ptr->next->prev != it.ptr or it.ptr->prev->next != it.ptr) {
            //std::cout << "Noway " << std::endl;
            return false;
        }
    }
    prevNode = it.ptr;
    it++;
    //std::cout << "Node " << ": " << *it;
    //std::cout << " (prev = " << it.ptr->prev << ", I'm at " << it.ptr << ", next = " << it.ptr->next << ")" <<  std:: endl;

    if(it.ptr == NULL) {
        return false;
    }

    if(it.ptr->prev != prevNode) {
        //std::cout << "hehe " << std::endl;
        return false;
    }
    if(it.ptr != mHeader) return false;


    return true;
}


#endif
