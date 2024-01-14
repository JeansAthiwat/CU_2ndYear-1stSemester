#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n,m,k;
    cin >> n >> m >>k;

    vector<pair<int,int>> brakev; // time speedcurrent
    brakev.push_back({0,k});

    for(int i = 0; i< n; i++){
        int t,d;
        cin >> t >> d;
        brakev.push_back({t,-d});
    }
    sort(brakev.begin(),brakev.end());
    vector<int> speedv(brakev.size());
    speedv[0] = k;

    for(int i = 1; i< speedv.size();i++){

        brakev[i].second = max(0, brakev[i-1].second + brakev[i].second);
        speedv[i] = brakev[i].second;
    }

    for(int i = 0;i < m; i++){
        int a,q;
        cin >> a >> q;

        if(a == 1){
            auto it = --upper_bound(brakev.begin(),brakev.end(), make_pair(q,k));
            cout << it->second << "\n";
        }else{
            int index = upper_bound(speedv.begin(),speedv.end(), q, greater<int>()) - speedv.begin();
            cout << brakev[index].first << "\n";
        }

    }

}
