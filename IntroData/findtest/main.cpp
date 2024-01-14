#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {9,-1,3,7,5,2,1,4};

    int x = 5;
   // cout << find(v.begin()+4,v.begin()+8,x) << "\nNIGGA";
    if(find(v.begin(),v.begin()+2,x) != v.end()) cout << "Yes1" << endl;
    if(find(v.begin(),v.begin()+4,x) != v.end()) cout << "Yes2" << endl;
    if(find(v.begin()+4,v.begin()+2,x) != v.end()) cout << "Yes3" << endl;
    if(find(v.begin()+5,v.begin()+8,x) != v.end()) cout << "Yes4" << endl;
    // all print yes becuase find(a,b,c) check for c if not found return b
}
