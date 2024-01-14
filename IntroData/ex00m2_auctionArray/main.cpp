#include <bits/stdc++.h>

using namespace std;

/*class MyComp {
  public:
    bool operator()(const pair<int,int> & lhs,const pair<int,int> & rhs) {
        if(lhs.fisrt != lhs.second) {
            return lhs.fisrt > rhs.first;
        } else {
            return lhs.second > rhs.second;
        }
    }
};*/
int main() {
    //MyComp theComp;
    int n,m,a;
    cin >> n >> m >> a;
    vector<int> itemsAmount(n); // itemlabel vector containning aount of that item
    int users[m][n]; // UserLabel - itemlabel matrix containing maxbid
    for(int i = 0; i < m; i++) {
        for(int j = 0; j<n; j++) {
            users[i][j] = 0;
        }
    }
    queue<int> usersWon[m+1];

    for(int i = 0; i<n; i++) {
        cin >> itemsAmount[i];
        // cin number of item of each item type : map?? *vec??* 1 to n atmost 10 piece
    }

    for(int i = 0; i<a; i++) {
        string action;
        int u,l,v;
        cin >> action;
        if(action == "B") {
            // if B recive user, label item,, value
            cin >> u >> l >> v;
            //users[u-1][l-1] = max(users[u-1][l-1],v); [[
            users[u-1][l-1] = v;
            //cout << u-1 << ":" << l-1 << "= " << users[u-1][l-1] << "\n";
        } else if(action == "W") {
            // if W receive user, item label to wtihdraw(possible ghost withdraw)
            cin >> u >> l;
            users[u-1][l-1] = 0; // 0 means no biding for that spacific user/item
        }
    }

    for(int itemIndex = 0; itemIndex < n; itemIndex++) {
        priority_queue<pair<int,int>> pq;
        for(int userIndex = 0; userIndex < m; userIndex++) {
            if(users[userIndex][itemIndex] != 0) pq.push({users[userIndex][itemIndex],userIndex});
        }
        //cout << "-------------------------------------------\n";
        while(!pq.empty() && (itemsAmount[itemIndex] > 0) ) {
            int bid = pq.top().second;  // maxbid , userIndex
            if(usersWon[bid].empty() || usersWon[bid].back() != itemIndex) {
                //cout << "pq top " <<  bid.first << ":" << bid << "\n";
                usersWon[bid].push(itemIndex);
                itemsAmount[itemIndex]--;
            }
            pq.pop();
            //cout << "after pop pq top " <<  pq.top().first << ":" << pq.top().second <<  "\n";
        }

    }


    for(int i = 0; i< m; i++) {
        if(usersWon[i].empty()) {
            cout << "NONE";
        } else {
            while(!usersWon[i].empty()) {
                cout << usersWon[i].front()+1 << " ";
                usersWon[i].pop();
            }
        }
        cout << "\n";
    }

    return 0;
}

