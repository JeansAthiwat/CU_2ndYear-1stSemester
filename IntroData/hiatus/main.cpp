#include <bits/stdc++.h>

using namespace std;


void findLastPublish(int &qyear,int &qmonth,map<int,set<int>> &publish ) {

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    vector<bool> publish(100000013,false);

    int n,m;
    cin >> n >> m;

    while(n--) {
        int year,month;
        cin >> year >> month;

        publish[(year*100) + month] = true;
    }

    while(m--) {
        int a,b;
        int ansY = 0,ansM = 0;

        cin >> a >> b;
        int query = a*100 + b;
        if(publish[query]) {
            cout << 0 << " " << 0 << " ";
        } else {
            bool nah = false;
            for(; !publish[query]; query--) {
                if(query == 0) {
                    nah = 1;
                    break;
                }
            }
            if(!nah) {
                ansY = query/100;
                ansM = query%100;
                cout << ansY << " " << ansM << " ";
            } else {
                cout << -1 << " " << -1 << " ";
            }
        }


    }

    return 0;
}
