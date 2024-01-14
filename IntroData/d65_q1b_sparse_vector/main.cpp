#include <iostream>
#include <vector>
#include <map>

using namespace std;
void insert_into_sv(map<int,int> &v, int pos, int value) {
//your code here
    vector<pair<int,int>> tmpMap;
    auto it = v.upper_bound(pos-1); // get the iterator of position of pos
    //cout <<"hreysdfsdfsdfsdf\n";
    while(it != v.end()){
        tmpMap.push_back({it->first+1,it->second});
        //cout << tmpMap.back().first << ":" << tmpMap.back().second << "\n";
        it = v.erase(it); // erase current pos the next in line will become the current pos // what does this guy return ??
    }
    //cout <<"hrey\n";
    it = v.insert(it,{pos,value});
    for(auto &x : tmpMap){
        it = v.insert(it,x);
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<int,int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        insert_into_sv(v,a,b);
    }
    cout << v.size() << "\n";
    for (auto &x : v) {
        cout << x.first << ": " << x.second << "\n";
    }
}
