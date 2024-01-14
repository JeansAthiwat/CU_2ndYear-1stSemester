#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m,a;
    cin >> n >> m >> a;
    vector<int> itemsAmount(n+1); // itemlabel vector containning aount of that item
    map<int,int> items[n+1]; // itemLabel vector containing map of - user: maxbid
    vector<int> usersWon[m+1];
    for(int i = 1; i<=n; i++) {
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
            items[l][u] = v;
        } else if(action == "W") {
            // if W receive user, item label to wtihdraw(possible ghost withdraw)
            cin >> u >> l;
            items[l].erase(u); // erase non existing?
        }
    }

    for(int itemIndex = 1; itemIndex <= n; itemIndex++) {
        priority_queue<pair<int,int>> pq;
        for(auto &userKey : items[itemIndex]) {
            pq.push({userKey.second,userKey.first});// maxbid , userIndex
            //cout << userKey.second << ":"<< userKey.first "\n";
        }

        while(!pq.empty() && itemsAmount[itemIndex] > 0) {
            int userLabel = pq.top().second; pq.pop();  // maxbid , userIndex
            if(usersWon[userLabel].empty() || usersWon[userLabel].back() != itemIndex) {
            usersWon[userLabel].push_back(itemIndex);
            itemsAmount[itemIndex]--;
            }

        }
    }
    for(int i = 1; i<= m; i++) {
        if(usersWon[i].empty()) {
            cout << "NONE";
        } else {
            for(int &item : usersWon[i]) {
                cout << item << " ";
            }
        }
        cout << "\n";
    }
}
