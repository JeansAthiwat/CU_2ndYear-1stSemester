#include <bits/stdc++.h>


using namespace std;
class MyComp {
  public:
    bool operator()(pair<int,int> a, pair<int,int> b) { //(type,power)
        if(a.first == b.first) {
            return a.second < b.second;
        } else {
            return b.second < a.second;
        }
    }
} eaSport;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    pair<int,int> character ;// power,type.
    vector<pair<int,int>> v;
    priority_queue<pair<int,int>,vector<pair<int,int>>,MyComp> pq(eaSport);
    int n,m;
    cin >> n >> m;

    for(int i=0; i<m; i++) {
        pq.push(make_pair(1,i));
    }

    for(int i = 0; i<n ; i++) {
    int a;
    cin >> a;
    v.push_back(make_pair(a,0));
    }

    for(int i = 0; i<n ; i++) {
    int b;
    cin >> b;
    v[i].second = b;
    }

    for(auto &x : v){
        cout << x.first <<":"<< x.second << " ";
    }
    cout << "\n";

     for(int i = 0;i< v.size();i++){
        pq.push(v[i]);
    }

    while(!pq.empty()){
        cout << pq.top().first << ":"<< pq.top().second << " ";
        pq.pop();
    }
   /* for(int i = 0;i< v.size();i++){
        pq.push(v[i]);
        cout << pq.top().first << ":"<< pq.top().second << " ";
    }*/

}
