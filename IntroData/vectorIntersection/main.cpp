#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> vecN(n);
    vector<int> vecM(m);

    for(int i = 0; i< n; i++) {
        int inp;
        cin >> inp;
        vecN[i] = inp;
    }
    sort(vecN.begin(),vecN.end());

    for(int i = 0; i< m; i++) {
        int inp;
        cin >> inp;
        vecM[i] = inp;
    }
    sort(vecM.begin(),vecM.end());

    auto itN = vecN.begin();
    auto itM = vecM.begin();

    while((itN != vecN.end()) && (itM != vecM.end())) {
        if(*itN == *itM) {
            if((*itN == *(itN-1) && (itN != vecN.begin())) || ((*itM == *(itM-1)) && (itM != vecM.begin()))) {
            } else {
                cout << *itN << " ";
            }
            itN++;
            itM++;

        } else if(*itN < *itM) {
            itN++;
        } else if(*itN > *itM) {
            itM++;
        }


    }
}
