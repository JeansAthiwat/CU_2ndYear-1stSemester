#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<bool> vecN(5001);
    vector<bool> vecM(5001);

    for(int n_count = 0 ; n_count < n; n_count++) {
        int ninp;
        cin >> ninp;
        vecN[ninp] = true;
    }

    for(int m_count = 0 ; m_count < m; m_count++) {
        int minp;
        cin >> minp;
        vecM[minp] = true;
    }

    for(int i = 0; i < vecN.size(); i++) {
        if((vecN[i] == true) && (vecM[i] == true)) {
            cout << i << " ";
        }

    }

}
