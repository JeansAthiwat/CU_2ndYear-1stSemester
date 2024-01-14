// Your code here
int getHeightValue(node* n,std::pair<KeyT,int> &mostUnbalance) {
    if(n == NULL) return -1;
    int leftnheight = getHeightValue(n->left,mostUnbalance);
    int rightnheight = getHeightValue(n->right,mostUnbalance);
    int nheight = 1 + std::max(leftnheight,rightnheight);

    int balanceValue = std::abs(leftnheight-rightnheight);

    if(balanceValue > mostUnbalance.second) {
        mostUnbalance = std::make_pair(n->data.first,balanceValue);
    } else if(balanceValue == mostUnbalance.second) {
        mostUnbalance = (mLess(n->data.first,mostUnbalance.first))? std::make_pair(n->data.first,balanceValue) : mostUnbalance;
    }

    return nheight;
}
KeyT getValueOfMostImbalanceNode() {
    // Your code here
    std::pair<KeyT,int> mostUnbalance(mRoot->data.first,0); // NULL 0
    getHeightValue(mRoot, mostUnbalance);
    return mostUnbalance.first;
}


    /*11
    50 17 72 12 23 54 76 9 14 19 67*/

    /*11
    50 17 72 12 23 54 76 9 14 19 25 53 67 75 77*/
