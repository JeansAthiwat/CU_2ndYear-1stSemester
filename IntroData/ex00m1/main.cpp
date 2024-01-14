#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> full;
    vector<int> timer;
    for(int i = 0; i< n; i++) {
        int inp;
        cin >> inp;

        full.push_back(inp);
        timer.push_back(0);
    }

    int customerCount = 0,elapsed = 0;
    bool allDone = false;
    while(!allDone) {
        for(int i = 0; i < n; i++) {
            timer[i]--;
            if(timer[i] <= 0) {
                customerCount++;
                //cout << "BEFOREtimer: "<< timer[i] << "full: " << full[i] << " \n";
                timer[i] = full[i];
                //cout << "AFTERtimer: "<< timer[i] << "full: " << full[i] << " \n";
                //cout << elapsed << " : cuscont :" << customerCount << " : (m:" << m;
                cout << elapsed << " ";
            }
            if(customerCount >= m) {
                allDone = true;
                break;
            }
        }
        elapsed++;
    }
}
