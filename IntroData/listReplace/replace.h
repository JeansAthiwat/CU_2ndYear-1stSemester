void replace(const T& x, list<T>& y) {
    //write your code here

    CP::list<T>::iterator thisIt = begin();
    while( thisIt != end() ) {
        if(*thisIt == x) {
            thisIt = erase(thisIt);
            for(CP::list<T>::iterator otherIt = y.begin(); otherIt != y.end(); ++otherIt) {
                insert(thisIt,*otherIt);
            }
        } else {
            ++thisIt;
        }



        //std::cout << *thisIt;;
    }

    /*for(list<T>::iterator thisIt = begin(); thisIt != end(); ++thisIt) {
       if(*thisIt == x && y.mSize > 0) {
           //create a copy of list y
           list<T> tmp = y;
           thisIt.ptr->prev->next = tmp.mHeader->next;
           thisIt.ptr->next->prev = tmp.mHeader->prev;

           tmp.mHeader->next->prev = thisIt.ptr->prev;
           tmp.mHeader->prev->next = thisIt.ptr->next;

           delete thisIt.ptr;
       }*/
}
