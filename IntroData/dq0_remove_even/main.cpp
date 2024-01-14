#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b) {
 //write your code only in this function

 //METHOD 1:
 /*for(auto it = v.begin()+b; it >= v.begin()+a;it--){
    if((it-v.begin())%2 == 0){
        v.erase(it);
    }
 }*/
 //METHOD 2:
 /*
 vector<int>::iterator it = v.begin()+b;
 if((it-v.begin()) % 2 != 0) it--;
 for(;it >= v.begin()+a;it -=2){
    v.erase(it);
 } */

 //METHOD 3:
 if(a % 2 == 1) a++;
 if(b % 2 == 1) b--;
 int tmp_size = v.size() - (((b-a) / 2)+1 );

 vector<int> tmp_v(tmp_size);

 int current_index = 0;
 for(int i = 0; i < a;i++){
     tmp_v[current_index++] = v[i];
 }

 for(int i = a+1; i<b;i+=2){
    tmp_v[current_index++] = v[i];
 }

 for(int i = b+1 ; i < v.size();i++){
    tmp_v[current_index++] = v[i];
 }

 v = tmp_v;
        //create a new vector to collect new data

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
 remove_even(v,a,b);
 //display content of the vector
 for (auto &x : v) {
 cout << x << " ";
 }
 cout << endl;
}
