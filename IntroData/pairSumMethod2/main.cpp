#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    vector<int> v;
    vector<int> numbers(1000009);
    vector<bool> dup(1000009);

    cin >> n >> m;

    while(n-- != 0) {
        int inp;
        cin >> inp;
        numbers[inp]++;
        if(!dup[inp]) {
            dup[inp] = true;
            v.push_back(inp);
        }
    }


    while(m-- != 0) {
        int sum;
        cin >> sum;
        bool hasFound = false;

        for(auto indexValue : v){
                if(sum - indexValue < 0 || sum-indexValue > 1000000) continue;

                else if(numbers[sum - indexValue] >= 1 && (indexValue * 2 != sum)) {
                    hasFound = 1;
                }
                else if(numbers[sum - indexValue] >= 2 && (indexValue * 2 == sum)){
                        hasFound = 1;
                }
        }

        if(hasFound) cout << "YES\n";
        else cout << "NO\n";
    }
}
