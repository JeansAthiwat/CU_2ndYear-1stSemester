#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include <iostream>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
    //write your code here We Gonna Count them Nodes
    if(n == NULL) return 0;
    return 1 + process(n->left) + process(n->right);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
    //write your code here
    if(mRoot == NULL) return std::pair<KeyT,MappedT>();

/* why we DO NOT have to set Parent waaa?
    mRoot->left->parent = NULL;
    mRoot->right->parent = NULL; */


    //set the Root for left and right
    left.mRoot = mRoot->left;
    right.mRoot = mRoot->right;

    mRoot->left = NULL;
    mRoot->right = NULL;

    left.mSize = process(left.mRoot);
    right.mSize = process(right.mRoot);
    mSize = 1;

    return mRoot->data;
}

#endif

