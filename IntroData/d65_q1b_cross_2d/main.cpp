#include <iostream>
#include <vector>
using namespace std;
void cross_2d(vector<vector<int>> &m,int r1, int r2, int c1, int c2) {
//your code here
    vector<vector<int> > v;
    for(int k = 0 ; k < m.size(); k++) {
        if(k < r1 || k > r2) {
            vector<int> tmp_col;
            //cout << "1" << "\n";
            for(int l=0; l<m[0].size(); l++) {
                    //cout << "2" << "\n";
                if(l < c1 || l > c2) {
                    tmp_col.push_back(m[k][l]);
                    //cout << "pushvbck" << m[k][l] << "\n";
                } else {
                    continue;
                }
            }
            v.push_back(tmp_col);
        } else {
            continue;
        }
    }
    m = v;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> m;
    int r,c,r1,r2,c1,c2;
    cin>> r >> c;
    cin >> r1 >> r2 >> c1 >> c2;
    m.resize(r);
    for (int i =0; i < r; i++) {
        m[i].resize(c);
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }
    cross_2d(m,r1,r2,c1,c2);
    for (int i =0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
