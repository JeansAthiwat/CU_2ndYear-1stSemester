#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n,m,start; //
    //
    cin >> n >> m >> start;
    vector<pair<int,int> > change(n+1);
    change[0] = {0,start};
    for(int i=1; i<=n; i++) {
        int a,s;
        cin >> a >> s;
        change[i] = {a,s};
    }
    sort(change.begin(),change.end());

    for(int curm = 0; curm<m; curm++) {
        int p,x;
        cin >> p >> x;
        auto it = change.begin();
        int di = start; //daily income
        int total = 0;
        int day = 0;
        while(true) {
            if(it->first == day) {
                di = it->second;
                it++;
            }
            total += di;
            //cout << total << " ";
            if(total >= p) {
                //cout << " -----------------------\n" << day << " ";
                cout << day << " ";
                day++;
                break;
            }
            if(day == x) {
                total = 0;
            }
            day++;
        }
    }

    return 0;
}
