#include <iostream>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;

long long ancesstorness(const long long &a, const long long &b,const long long &K)  { // show wether or not a is an ancest of b
    long long bTmp = b;
    int relativeLevel = 0;
    while(bTmp >= a) {
        bTmp = (bTmp-1)/K;
        relativeLevel++;
        if(bTmp == a) return relativeLevel;
    }
    return -1;
}

int heightOf(const long long &index, const long long &K)  {
    long long totalNodes = 1;
    long long height = 0;
    long long nodesAtLevel = 1;
    while(totalNodes <= index) {
        height++;
        nodesAtLevel *= K;
        totalNodes += nodesAtLevel;
    }
    return height;
}

int relation(long long S, long long a, long long b) {
    int aHeight,bHeight;
    aHeight = heightOf(a,S);
    bHeight = heightOf(b,S);

    if(aHeight == bHeight) return 4; // is on the same floor

    if(aHeight > bHeight) {
        int tmp = ancesstorness(b,a,S);
        if(tmp == 1) return 1;
        else if(tmp > 1) return 2;
    }
    if(aHeight < bHeight) {
        int tmp = ancesstorness(a,b,S);
        if(tmp == 1) return 1;
        else if(tmp > 1) return 2;
    }

    return 3;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long long S,a,b;
    cin >> n;
    while (n--) {
        cin >> S >> a >> b;
        cout << relation(S,a,b) << " ";
    }
    cout << endl;
}
