#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n,m;
    cin >> n >> m;

    map<int,int> somchai; // +itemid,+amount;
    map<int,set<int>> sold ; // -amount, -itemid  -999: {-5654,-5646546,-6553848}
    while(n--) {
        int inp;
        cin >> inp;
        somchai[inp] = 0;
    }

    while(m--) {
        int sit,a,b,k;
        cin >> sit;
        if(sit == 1) {
            cin >> a >> b; // itemID , amount
            auto it = somchai.find(a);
            if(it != somchai.end()) {
                if(sold.find(-somchai[a]) != sold.end()) {
                        //cout << "SEX";
                    sold[-somchai[a]].erase(-a); // erase id from old value
                    if(sold[-somchai[a]].empty()) sold.erase(-somchai[a]);
                }
                somchai[a] += b;
                sold[-somchai[a]].insert(-a); // put id on new value
            }
        } else if(sit == 2) {
            cin >> k;
            auto it = sold.lower_bound(-k+1);
            if(it != sold.end()) {
                    //cout << "amout:" << it->first << "  --- ";
                set<int> tmp = it->second;
                cout << -(*tmp.begin()) << "\n";
            } else {
                cout << "NONE\n";
            }
        }
    }

    return 0;
}
