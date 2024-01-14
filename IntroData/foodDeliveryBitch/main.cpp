#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    queue<int> p;
    vector<int> eventQueue;
    while(m--) {
        int in;
        cin >> in;
        p.push(in);
    }
    while(n--) {
        int situation,a,b;
        cin >> situation;
        if(situation == 1) {
            cin >> a >> b;
            int tmp = b*10 + a;
            eventQueue.push_back(tmp);
        } else {
            eventQueue.push_back(2);
        }
    }

    while(!p.empty()) {
        int targetIncome = p.front();
        p.pop();
        bool goal = false;
        int totalMoney = 0;
        int orderDone = 0;
        queue<int> qPlathong,qDot;

        for(int command : eventQueue) {

            if(command == 2) {
                int pricePlatong,priceDot;
                if(!qPlathong.empty() && !qDot.empty()) {
                    pricePlatong = qPlathong.front();
                    priceDot = qDot.front();

                    if(priceDot < pricePlatong) {
                        totalMoney += priceDot;
                        qDot.pop();
                    } else {
                        totalMoney += pricePlatong;
                        qPlathong.pop();
                    }
                } else if(!qDot.empty()) {
                    priceDot = qDot.front();
                    totalMoney += priceDot;
                    qDot.pop();
                } else if(!qPlathong.empty()) {
                    pricePlatong = qPlathong.front();
                    totalMoney += pricePlatong;
                    qPlathong.pop();
                }
                orderDone++;
                if(totalMoney >= targetIncome) {
                    cout << orderDone << " ";
                    goal = 1;
                    break;
                }

            } else {
                if(command%2 == 1) {
                    qPlathong.push(command/10);
                } else {
                    qDot.push(command/10);
                }

            }
        }


        if(!goal)cout << -1 << " ";;
    }


}
