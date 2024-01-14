#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m,k;
    vector<int> vecNumber;

    cin >> n >> m >> k;

    while(n--) {
        int inp;

        cin >> inp;
        vecNumber.push_back(inp);
    }
    sort(vecNumber.begin(),vecNumber.end());


    while(m--) {
        int p;
        int cnt = 0;

        cin >> p;

        int lowerBound = p-k;
        int upperBound = p+k; // include last

        for(int i = 0; i < (vecNumber.size()); i++) {
            if(vecNumber[i] < lowerBound) continue;
            else if(vecNumber[i] >= lowerBound && vecNumber[i] <= upperBound) cnt++;
            else if(vecNumber[i] > upperBound) break;
        }

        cout << cnt << " ";
    }

    return 0;
}
