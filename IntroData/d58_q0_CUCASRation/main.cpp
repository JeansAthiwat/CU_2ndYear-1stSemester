#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << std::fixed << std::setprecision(2);
    int n;
    map<int,pair<int,int>> subj;
    map<string,pair<int,int>> prof;

    cin >> n;

    while(n-- != 0) {
        int inpID,inpScore;
        string inpProf;

        cin >> inpID >> inpProf >> inpScore;
        subj[inpID].first += inpScore;
        subj[inpID].second++;

        prof[inpProf].first += inpScore;
        prof[inpProf].second++;
    }

    /*for(auto it = subj.begin(); it != subj.end(); it++){
        float avg;
        avg = ((*it).second.first +0.0) / ((*it).second.second);
        cout << it->first << " " << avg << "\n";

    }*/

    for(auto &x : subj) {
        float avg;
        avg = (x.second.first + 0.0)/(x.second.second);
        cout << x.first << " " << avg << "\n";
    }

    for(auto &y : prof){
        float avg;
        avg = (y.second.first +0.0) / (y.second.second);
                cout << y.first << " " << avg << "\n";
    }





}

/* Struct idea
    Map<int,<int,int>> subjectID:(score,count);
    map<string,<int,int>> profCode:(score,count);
*/



