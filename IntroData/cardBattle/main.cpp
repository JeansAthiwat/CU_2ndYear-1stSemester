#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n,m;

    cin >> n >> m;
    map<int,int> deck; // number:frequentzy

    while(n--) {
        int inp;
        cin >> inp;
        deck[inp]++;
    }
    int currentEnemy = 1;
    bool hasLost = false;
    while(!hasLost && currentEnemy != m+1) {
        int cardAmount;
        cin >> cardAmount;
        //cout << 1;
        while(cardAmount--) {
            int power;
            cin >> power;
            auto it = deck.lower_bound(power+1);
            if((it != deck.end())) {

                (*it).second--;
                if((it->second == 0)) deck.erase(it);

            } else {
                hasLost = true;
                break;
            }
        }
        if(!hasLost) currentEnemy++;
    }
    cout << currentEnemy;

    return 0;
}
