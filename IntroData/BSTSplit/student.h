#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
    //your code here
    CP::map_bst<KeyT,MappedT,CompareT> result;
    Node* n = mRoot;
    Node* lastInCorrectNode = NULL;
    Node* lastCorrectNode = NULL;
    while(n != NULL && compare(n->data.first,val) != 0) {
        while(n->right != NULL && mLess(n->data.first, val)) { // วิ่งจนกว่า val จะ <= key

            n = n->right;
        }
        while(n->left != NULL && mLess(val, n->data.first,)) {
            n = n->left;
            lastCorrectNode = n;
        }

        child_link(lastCorrectNode,)
    }




    return result;
}




#endif
