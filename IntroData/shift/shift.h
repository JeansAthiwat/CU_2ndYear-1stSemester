void shift(int k) {
    // TODO: Add your code here
    if(mSize < 2) return;

    bool isNega = false;
    if(k < 0) isNega = true;
    if(isNega) k = k *(-1);

    k = k%mSize;
    if(k == 0) return;
    if(isNega) k = mSize-k;

    CP::list<T>::iterator it = begin();

    while(k--) {
        it++;
    }

    node* targetNode = it.ptr;
    node* targetPrev = targetNode->prev;
    node* targetNext = targetNode->next;

    node* headerNode = mHeader;
    node* oldFirstNode = mHeader->next;
    node* oldLastNode = mHeader->prev;

    //fix mHeader node
    mHeader->next = targetNode;
    mHeader->prev = targetPrev;

    //fix firstNode and last node
    oldFirstNode->prev = oldLastNode;
    oldLastNode->next = oldFirstNode;

    //fix targetNode
    targetNode->prev = mHeader;
    //fix node before targetNOde
    targetPrev->next = mHeader;

}
