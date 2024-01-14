#include <bits/stdc++.h>

using namespace std;

class window {
    set<int> lh;
    set<int> uh;

    set<int>::iterator lhMax() {
        return lh.rbegin();
    }
    set<int>::iterator uhMin() {
        return uh.begin();
    }

  public:

    bool insert(pair<int,int> &p ) {
        //insert condition
        // p < lhMax
        // p == lhMax
        // p > lhMax < uhMin
        // p == uhMin
        // p > uhMin

        if()

        }

    bool erase(pair<int,int> &p) {

    }
    window() {
        lh.insert({INT_MIN,INT_MIN});
        uh.insert({INT_MAX,INT_MAX});
    }


} window;


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int n,w;
    cin >> n >> w;
    vector<int> v(n); // vector to hold all number and indexes
    for(int index = 0; index < n; index++) {
        int inp;
        cin >> inp;
        v[i] = inp;
    }

    cout << "Hello world!" << endl;
    return 0;
}
