#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<string,int> words;
    cin >> n;

    while(n--) {
        string inp;
        cin >> inp;
        words[inp]++;
    }

    for(auto &k : words) {
        if(k.second > 1) {
            cout << k.first << " " << k.second << "\n";
        }

    }
}
