void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if(mSize == 0) return ;

    int list1_addSize = (mSize%2 == 0) ? mSize/2 : mSize/2 +1;
    int list2_addSize = mSize/2 ;

    auto it2_start = begin();
    for(int i = 0; i < list1_addSize; i++ ) {
        //std::cout << "list2 first node : " << *it2_start << "\n";
        it2_start++; // point to first elem of list2 (care END case)

    }
    //std::cout << "list2 first node : " << *it2_start << "\n";

    node* list1_start = begin().ptr;
    node* list1_lastNode = it2_start.ptr->prev;

    node* list2_start = it2_start.ptr;
    node* list2_lastNode = mHeader->prev;

    node* in_list1_lastNode = list1.mHeader->prev;
    node* in_list2_lastNode = list2.mHeader->prev;

    //fix list1 ,2 heaader and last elemnt pointer ma brother
    list1.mHeader->prev = list1_lastNode;
    in_list1_lastNode->next = list1_start;

    //fix this pointers to list1 and list2
    list1_start->prev = in_list1_lastNode;
    list1_lastNode->next = list1.mHeader;

    if(mSize > 1) { //
        //fix list2 heaader and last elemnt pointer ma brothe
        //fix this pointers to list2
        list2.mHeader->prev = list2_lastNode;
        in_list2_lastNode->next = list2_start;
        list2_start->prev = in_list2_lastNode;
        list2_lastNode->next = list2.mHeader;
    }
    mHeader->next = mHeader;
    mHeader->prev = mHeader;

    mSize = 0;
    list1.mSize += list1_addSize;
    list2.mSize += list2_addSize;


}
