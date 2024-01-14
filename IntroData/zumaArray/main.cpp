#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(false);

    int n,k,v;
    cin >> n >> k >> v;

    int a[n+1];
    for(int i = 0 ; i < n+1 ; i++) {
        if(i == k) {
            a[i] = v;
            continue;
        }
        cin >> a[i];
    }
    int delCount = 0;
    int lIndex = k;
    int rIndex = k;
    int tmp_l = k;
    int tmp_r = k;

    while( (tmp_l >= 0 && tmp_r < n+1) && a[tmp_l] == a[tmp_r]) {
        while(a[tmp_l-1] == a[tmp_l] && tmp_l >= 0) tmp_l--;
        while(a[tmp_r+1] == a[tmp_r] && tmp_r < n) tmp_r++;

        if (tmp_r - tmp_l + 1 - delCount < 3 ) break;
        delCount = tmp_r - tmp_l + 1 ;
        lIndex = tmp_l;
        rIndex = tmp_r;
        tmp_l--   ;
        tmp_r++;
    }

    for(int i = 0 ; i < n+1 ; i++ ) {
        if(i >= lIndex && i <= rIndex) {
            continue;
        }
        cout << a[i] << " ";
    }
}


