#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m,a;
    vector<int> itemsAmount(n); // itemlabel vector containning aount of that item
    vector<map<int,int> > users(m); // USerLAbel vector con taining map of - itemType: maxbid
    vector<vector<int>> usersWon;
    for(int i = 0; i<n; i++) {
        cin >> itemsAmount[i];
        // cin number of item of each item type : map?? *vec??* 1 to n atmost 10 piece
    }

    for(int i = 0; i<a; i++) {
        char action;
        int u,l;
        unsigned short v;
        cin >> action;
        if(action == "B") {
            // if B recive user, label item,, value
            cin >> u >> l >> v;
            users[u-1][l-1] = max(users[u-1][l],v);
        } else if(action == "W") {
            // if W receive user, item label to wtihdraw(possible ghost withdraw)
            cin >> u >> ll
                users[u-1].erase(l-1); // erase non existing?
        }
    }

    for(int itemIndex = 0; itemIndex < n; i++) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(int userIndex = 0; userIndex < m; userIndex++) {
            auto bidIt users[userIndex].find(itemIndex);
            if(bitIt != users[userIndex].end()) {
                pq.push({bidIt->second,userIndex}); // maxbid , userIndex
            }
        }
        while(itemsAmount[itemIndex]){
            pair<int,int> bid = pq.top();  // maxbid , userIndex
            usersWon[bid.second].push_back(itemIndex);
        }
    }

    for(auto &userWon : usersWon){
        for(auto &item : userWon){
            cout << item+1 << " \n";
        }
    }


    /*for(int userIndex=0; userIndex < m; i++) {
        for(int itemIndex = 0; itemIndex < n; itemIndex++) {
            auto bidIt = users[userIndex].find(itemIndex);
            if(bitIt != users[userIndex].end()){

            }
        }

    }*/


}
