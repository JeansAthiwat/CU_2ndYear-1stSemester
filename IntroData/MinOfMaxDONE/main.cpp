#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,m;
    cin >> n >> m;

    vector<int> typeMax(m,1);
    vector<int> newMember(n); // index = type , value = power
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    for(int i = 0; i < m; i++) {
        pq.push({1,i}); // push starting boi into pq sorted where greater number are in front
    }
    for(int i = 0; i < n; i++) {
        int in;
        cin >> in;
        newMember[i] = in;
    }
    for(int i = 0; i < n; i++) {
        int in;
        cin >> in;
        typeMax[in] = max(typeMax[in],newMember[i]);
        pq.push({typeMax[in],in});

        while(typeMax[pq.top().second] > pq.top().first) {
            pq.pop();
        }

        cout << pq.top().first << " ";
    }

}
