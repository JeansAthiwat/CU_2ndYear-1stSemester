#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,a;
    cin >>  n >> a ;
    vector<int> ides;

    int lmi = a;
    int num = 1;
    while(lmi < n) {
        for(int i = 0; i < num; i++) {
            if(lmi + i < n)
                ides.push_back(lmi + i);
        }
        lmi = (lmi*2)+1;
        num *= 2;
    }

    cout << ides.size() << "\n";
    for(auto &x : ides) {
        cout << x << " ";
    }

}
