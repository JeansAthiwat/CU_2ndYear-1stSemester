#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;


    for(int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;

        if(a == b) {
            cout << "a and b are the same node\n";
        } else if(a > b) {
            bool isAnc = false;
            while(a > 0) {
                //cout << "bef" << a << "\n";
                a = (a-1)/2;
                //cout << "after" << a << "\n";
                if(a == b) {
                    isAnc = true;
                    cout << "b is an ancestor of a\n";
                    break;
                }
            }
            if(!isAnc) {
                cout << "a and b are not related\n";
            }
        } else if(b > a) {
            bool isAnc = false;
            while(b > 0) {
                //cout << "bef" << b << "\n";
                b = (b-1)/2;
                //cout << "after" << b << "\n";
                if(a == b) {
                    isAnc = true;
                    cout << "a is an ancestor of b\n";
                    break;
                }
            }
            if(!isAnc) {
                cout << "a and b are not related\n";
            }
        }


    }

}
