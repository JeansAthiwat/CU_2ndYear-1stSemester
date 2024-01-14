#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    long long K;
    cin >> n >> K;
    /*
    from logK(x) = ln(x)/ln(K)
    */
    if(K == 1) {
        cout << n -1 << endl;
    } else {
        long long depthElem = 1;
        int depth = 0;
        while(n > 0) {
            n -= depthElem;
            depthElem *= K; // next depth will have n*K elem
            depth++;
        }

        cout << depth - 1 << endl;
    }

}
