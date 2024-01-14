#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;

    cin >> N;
    set<int> B;
    set<int> A;
    for(int i = 1;i <= N;i++){
        A.insert(i);
    }

    bool cond = true;

    while(N--) {
        int inp;
        cin >> inp;
        if(B.find(inp) == B.end()) B.insert(inp);
        else cond = false;
    }
    bool isEqual = (A == B);
    cout << ((cond && isEqual) ? "YES" : "NO");
    return 0;
}
