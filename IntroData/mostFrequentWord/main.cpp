#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<string,int> words;
    cin >> n;
    while(n-- != 0){
        string inp;
        cin >> inp;
        words[inp]++;
        //cout << inp << ":" << words[inp] << ";";
    }

    map<string,int>::iterator resIt;
    map<string,int>::iterator it = words.begin();
    while(it != words.end()){
            //cout << it->first << ":";
        if(it == words.begin() || it->second >= resIt->second){
            resIt = it;
        }
        it++;
    }

    cout << resIt->first << " " << resIt->second;
}
