#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<int> numbers;
    unordered_set<int> appearTwice;
    int n,m,vec_value,target_value;
    cin >> n >> m;
    vector<int> myInt;
    // takes in member of array and put to corresponding value
    for(int i =0 ; i < n; i++) {
        cin >> vec_value;
        myInt.push_back(vec_value);
        if(numbers.find(vec_value) != numbers.end()) {
            appearTwice.insert(vec_value);
        }
        numbers.insert(vec_value);
    }

    for(int c=0; c < m; c++) { // target value iteration's loop
        bool hasFound = false;
        cin >> target_value;
        for(int i =0; i < myInt.size(); i++) {
            int needed = target_value - myInt[i];
            if(numbers.find(needed)!= numbers.end()) {
                if(myInt[i] == needed) {
                    if(appearTwice.find(needed) != appearTwice.end()) {
                        cout << "\nYES";
                        hasFound = true;
                        break;
                    }
                } else {
                    cout << "\nYES";
                    hasFound = true;
                    break;
                }


            }
        }
        if(!hasFound) cout << "\nNO";
    }
    /*for(auto v: existed){
        cout << v << " ";
    }*/
}
