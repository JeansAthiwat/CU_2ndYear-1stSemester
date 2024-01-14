#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool isCousins(long long &a,long long &b, map<long long,long long> &parent) {
    long long aGrandParent,bGrandParent;

    if(parent.find(a) != parent.end()) {
        //cout << "aP is : " << parent[a] << "\n";
        if(parent.find(parent[a]) != parent.end()) {
            aGrandParent = parent[parent[a]];
            //cout << "aGP is : " << aGrandParent << "\n";
        } else {
            return false;
        }
    } else {
        return false;
    }

    if(parent.find(b) != parent.end()) {
        //cout << "bP is : " << parent[b] << "\n";
        if(parent.find(parent[b]) != parent.end()) {
            bGrandParent = parent[parent[b]];
            //cout << "bGP is : " << bGrandParent << "\n";
        } else {
            return false;
        }
    } else {
        return false;
    }

    if(aGrandParent == bGrandParent && (a != b)) {
        return true;
    }

    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    map<long long,long long> parent;// key:pair -> son:father

    cin >> n >> m;

    while(n--) {
        long long f,s;
        cin >> f >> s;
        parent[s] = f;
    }

    while(m--) {
        long long a,b;
        cin >> a >> b;

        if(isCousins(a,b,parent)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
