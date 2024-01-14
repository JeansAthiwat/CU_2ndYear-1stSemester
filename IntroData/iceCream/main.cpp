#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    const int N = 3e6;
    vector<int> sum(N+1);
    int n,m,start,a,b,p,x;
    cin >> n >> m >> start;

    sum[0] = start;
    for(int i = 0; i<n; i++) {
        cin >> a >> b;
        sum[a] = b;
    }

    for(int i = 1; i<N; i++) {
        if(sum[i] == 0) sum[i] = start;
        else start = sum[i];
        sum[i] += sum[i-1]; // add to be total of da day
    }

    for(int i = 0; i < m; i++) {
        cin >> p >> x;
        if(sum[x] >= p) cout << (lower_bound(sum.begin(),sum.end(),p)) - sum.begin() << " ";
        else cout << lower_bound(sum.begin(),sum.end(),p+sum[x]) - sum.begin()  << " ";

    }
            //cout << sum[N] << " ";
    return 0;
}
