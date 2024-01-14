#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
 //write some code here
 vector<string>::iterator itmax = ((it + k) < v.end()) ? (it + k) : v.end() - 1;
 vector<string>::iterator itmin = ((it - k) > v.begin()) ? (it - k) : v.begin();
 v.erase(itmin,itmax+1); //erase from min to before max
 return v;
 /*for(auto eraseit = itmax; eraseit >= itmin; eraseit--){

 }*/
 //don’t forget to return something
}
int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
 cout << x << endl;
 }
}
