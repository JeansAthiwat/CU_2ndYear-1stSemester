#include <bits/stdc++.h>


using namespace std;

int main() {
    int n,w ; // w is even for sure
    vector<int> v;
    set< pair<int,int>> medFinder;
    std::cin >> n >> w;

    while(n--) {
        int in;
        std::cin >> in;
        v.push_back(in);
    }

    for(int i = 0; i <= w ; i++) {
        medFinder.insert({v[i],i}); // (value ,index)
    }

    auto it = medFinder.begin();
    for(int i = 0 ; i < (w/2); i++) it++;

    cout << it->first << " ";
    for(int i = w+1; i<v.size(); i++) {


        if(it->second == i-w-1) {
            it = medFinder.insert(it, {v[i],i});
            medFinder.erase({v[i-w-1],(i-w-1)});

        } else {
            medFinder.erase({v[i-w-1],(i-w-1)});
            medFinder.insert({v[i],i});

            if(it->first > v[i]) {
                it--;
            } else if(it->first <= v[i]) {
                it++;
            }
        }

        cout << it->first << " ";
    }
    return 0;
}
