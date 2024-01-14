#include <bits/stdc++.h>


using namespace std;
using lli = long long int;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n,w;
    cin >> n >> w;
    vector<pair<int,int>> v(n); // vector to hold all number and indexes
    for(int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        v[i] = inp;
    }

    /*Window window;
    for(int i = 0; i < w; i++) { // add value until it has w(window total indexes) value
        window.insert(v[i]);
    }
    /*if(n == w){
        cout << window.getMedian() << " ";
    }

    for(int i = w; i < n; i++) {
        window.insert(v[i]);

        cout << window.getMedian() << " ";

        window.erase(v[i-w]);
    }*/


}
