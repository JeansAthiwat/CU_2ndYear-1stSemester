#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(100);
    for (int i = 0; i< 100 ; i++) {
        v[i] = 100 - i;
    }
    auto it = v.begin();
    cout << *it << ":" << it - v.begin() << endl;
    sort(v.begin(),v.end());
    cout << *it << ":" << it - v.begin()<< endl;
    v.erase(v.begin());
    cout << *it << ":" << it - v.begin()<< endl;
    return 0;
}
