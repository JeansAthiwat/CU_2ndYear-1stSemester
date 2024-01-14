#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    int totalPrice = 0;
    queue<int> qp,qd;
    vector<int> result,v;
    cin >> n >> m;

    while(m--) {
        int inp;
        cin >> inp;
        v.push_back(inp);
    }

    while(n--) {

        int a,b,c;
        cin >> c;

        if(c == 1) {
            cin >> a >> b;
            if(a == 1)qp.push(b);
            else qd.push(b);
        } else {
            int pp;
            int pd;
            if(!qp.empty() && !qd.empty()) {
                pp = qp.front();
                pd = qd.front();
                if(pd < pp) {
                    totalPrice += pd;
                    qd.pop();
                } else {
                    totalPrice += pp;
                    qp.pop();
                }
            } else if(!qp.empty() && qd.empty()) {
                totalPrice += qp.front();
                qp.pop();
            } else if(qp.empty() && !qd.empty()) {
                totalPrice += qd.front();
                qd.pop();
            }
            result.push_back(totalPrice);

        }

    }

    for(int targetV : v) {
        auto it = std::lower_bound(result.begin(),result.end(),targetV);
        if(it != result.end()) {
            cout << (it-result.begin())+1 << " ";
        } else {
            cout << -1 << " ";
        }

    }
}


