#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool descentcomp(int a,int b) {
    return a > b;
}

int main()
{
    int q;
    vector<int> v;
    cin >> q;
    for(int i = 0; i < q; i++){
        string cmd;
        cin >> cmd;
        if(cmd == "pb"){
            int value;
            cin >> value;
            v.push_back(value);
        }else if(cmd == "sa"){
            sort(v.begin(),v.end());
        }else if(cmd == "sd"){
            sort(v.begin(),v.end(),descentcomp);
        }else if(cmd == "r"){
            /*vector<int> tmp_v;
            for(vector<int>::iterator itfromlast = v.end()-1; itfromlast >= v.begin(); itfromlast--){
                tmp_v.push_back(*itfromlast); // might takes a bit more time
            }
            v = tmp_v;*/
            reverse(v.begin(),v.end());
        }else if(cmd == "d"){
            int index;
            cin >> index;
            v.erase(v.begin()+index);
        }
    }

    for(vector<int>::iterator it = v.begin();it < v.end();it++){
        cout << *it << " ";
    }



    return 0;
}
