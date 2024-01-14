#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int mFront,mSize,mCap,last,correction;
    std::cin >> n;

    while(n--) {
        cin >> mFront >> mSize >> mCap >> last >> correction;

        if((mFront < mCap) && (mSize <= mCap) && (last < mCap) && ((mFront + mSize)%mCap == last)) {
            cout << "OK\n";
        } else {
            cout << "WRONG";
            if(correction == 1) { // Front is wrong
                int mFrontFix = (last-mSize+mCap)%mCap;
                cout << " " << mFrontFix;
            } else if(correction == 2) { // mSize is wrong
                int mSizeFix;
                mSizeFix = (last - mFront + mCap)%mCap;
                cout << " " << mSizeFix;
            } else if(correction == 3) { // mCap is wrong
                int mCapFix;
                if(mFront < last) {
                    mCapFix = last +1;
                } else {
                    mCapFix = mFront + mSize - last;
                }
                cout << " " << mCapFix;
            } else if(correction == 4) { // last is wrong
                int lastFix = (mSize + mFront)%mCap;
                cout << " " << lastFix;
            }
            cout << "\n";
        }

    }
}

