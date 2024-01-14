#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
    int tmp_a;
    int tmp_b;
    while(b>=a){
        tmp_a = v[b];
        tmp_b = v[a];

        v[a] = tmp_a;
        v[b] = tmp_b;

        a++;
        b--;
    }

    /*
    //define iterator a and b
    vector<int>::iterator it_v_a = v.begin()+a;
    vector<int>::iterator it_v_b = v.begin()+b;
    //while loop and swap iterator a value with b value
    int tmp_a;
    int tmp_b;
    while(it_v_b >= it_v_a){
            tmp_a = *it_v_b;
            tmp_b = *it_v_a;
            *it_v_a = tmp_a;
            *it_v_b = tmp_b;
    // after swap ita++ and itb-- until itb <= it a
            it_v_a++;
            it_v_b--;
    }
*/
 //write your code only in this function
}
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,a,b);
 //display content of the vector
 for (auto &x : v)
 cout << x << " ";
 cout << endl;
}
