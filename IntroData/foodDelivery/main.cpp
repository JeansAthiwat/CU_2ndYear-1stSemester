#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> p;
    queue<int> q;

    int P = 1000000;
    while(m--) {
        int in;
        cin >> in;
        p.push_back(in);
    }

    while(n--) {
        int situation,a,b,encoded;
        cin >> situation;
        if(situation == 1) {
            cin >> a >> b;
            encoded = (P)+(b*10)+a;
            q.push(encoded);
        } else {
            q.push(2*P);
        }
    }

    for(auto targetIncome: p) {
        bool goal = false;
        int totalMoney = 0;
        int orderDone = 0;
        set<int> foodOrder; //?
        queue<int> tmpQ = q;
        while(!tmpQ.empty()) {
            if(totalMoney >= targetIncome) {
                cout << orderDone << " ";
                goal = true;
                break;
            }
            int command = tmpQ.front();
            tmpQ.pop();
            //cout << "sit:" << command/P << " store: " << (command-P)%10 << " price :"<< (command-P)/10 <<"\n";
            if(command/P == 1) {
                int encodedPS = command-P;
                foodOrder.insert(encodedPS);
            } else {
                auto it = foodOrder.begin();
                int price = (*it)/10;
                totalMoney += price;
                orderDone++;
                foodOrder.erase(it);
            }
            if(totalMoney >= targetIncome) {
                cout << orderDone << " ";
                goal = true;
                break;
            }
            // cout << "Bruh";
        }
        if(!goal)cout << -1 << " ";

    }


}
