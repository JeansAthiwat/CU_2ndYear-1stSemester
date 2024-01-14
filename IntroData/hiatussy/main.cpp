#include <bits/stdc++.h>

using namespace std;


void findLastPublish(int &qyear,int &qmonth,map<int,set<int>> &publish ) {

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    vector<int> publish;
    int n,m;

    cin >> n>>m;

    while(n--) {
        int year,month;
        cin >> year >> month;

        publish.push_back(year*100 + month);
    }

    sort(publish.begin(),publish.end());

    while(m--) {

        int a,b;
        cin >> a >> b;

        int query = a*100+b;
        auto it = lower_bound(publish.begin(),publish.end(),query);
        //cout << query << "-- " << *it << " \n";
        if(query < publish[0]) {cout << "-1 -1 "; continue;}
        if(query == *it) {cout << "0 0 "; continue;}
        it--;
        cout << *it/100 << " " << *it%100 << " ";
    }

    return 0;
}

