#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    map<string,int> citizenVote;
    map<int,vector<string>> result;

    cin >> n >> k;

    while(n--){
        string voteInp;
        cin >> voteInp;
        citizenVote[voteInp]++;
    }

    for(auto &kp : citizenVote){
        if(!kp.second) continue;

        if(result.find(kp.second) != result.end()){
            result[kp.second].push_back(kp.first);
        }
        else{
            result[kp.second].push_back(kp.first);
        }
    }
    //cout << "res Size :" << result.size() << "\n";
    int seatCount = 0;
    int leastVote = 0;
    for(auto it_back = result.rbegin(); it_back != result.rend(); it_back++){
        if(seatCount >= k) break;


        seatCount += (*it_back).second.size();
        leastVote = (*it_back).first;
        //cout << "voteCount : " << (*it_back).first << "   -  leastVote : " << leastVote;
    }

    cout << leastVote;




}
