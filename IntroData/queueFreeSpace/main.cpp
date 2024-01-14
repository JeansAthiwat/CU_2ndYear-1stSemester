#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int mSize = 0 ;
    int mCap = 1;
    int N;
    cin >> N;
    while(N--) {
        int a, k ;
        cin >> a >> k;
        if(a == 0){
            int sheesh = log2(mSize + k);
            cout << sheesh << endl;
            int newCap = pow(2,sheesh+1);
            cout << newCap << endl;
            if(newCap > mCap){
                mCap = newCap;
            }
            /*while(mSize + k > mCap) {
                mCap = mCap*2;
            }*/
            mSize += k;
        }else{
            mSize -= k;
        }
    }
    cout << mCap-mSize << endl;
    return 0;
}
