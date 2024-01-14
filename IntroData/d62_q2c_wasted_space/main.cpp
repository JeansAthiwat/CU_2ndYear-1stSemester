#include <iostream>

using namespace std;

int main() {
    int mCap = 1;
    int mSize = 0;
    int n;
    cin >> n;

    mSize += n;
    while(mCap < mSize) {
        mCap *= 2;
    }
    cout << mCap-mSize;






}
