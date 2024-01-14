#include <bits/stdc++.h>

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    map<char,int> alphabeticalOrder;
    char currentChar = 'a';
    for (int i = 0; i < 26; ++i) {
        alphabeticalOrder[currentChar] = i;
        ++currentChar;
    }
    std::array<char, 52> alphabets = {
        'a','b','c','d','e','f','g','h','i','j','k','l','m',
        'n','o','p','q','r','s','t','u','v','w','x','y','z',
        'a','b','c','d','e','f','g','h','i','j','k','l','m',
        'n','o','p','q','r','s','t','u','v','w','x','y','z'
    };


    int n,m,l;
    cin >> n >> m >> l;

    int encoder[l];
    set<string> database;

    for(int i = 0; i < l; i++) {
        int inp;
        cin >> inp;
        encoder[i] = inp%26; // !!!
    }

    while(n--) {
        string inp;
        cin >> inp;
        database.insert(inp);
    }

    while(m--) {
        char inp[l];
        cin >> inp;

        for(int i = 0; i< l; i++) {
            inp[i] = alphabets[alphabeticalOrder[inp[i]] + encoder[i]];
        }
        string inpDecoded(inp);

        if(database.find(inpDecoded) != database.end()) cout << "Match\n";
        else cout << "Unknown\n";
    }
    return 0;
}
