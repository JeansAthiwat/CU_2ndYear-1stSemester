#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,vector<int>::iterator a,vector<int>::iterator b) {
    b--;
    int tmp_a;
    int tmp_b;
    while(b >= a){
            tmp_a = *b;
            tmp_b = *a;
            *a = tmp_a;
            *b = tmp_b;
    // after swap ita++ and itb-- until itb <= it a
            a++;
            b--;

    }
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
 reverse(v,v.begin()+a,v.begin()+b+1);
 //display content of the vector
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}
