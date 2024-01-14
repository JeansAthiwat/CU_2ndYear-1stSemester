#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    vector<bool> existance(1000000001);

    int n,m;

    cin >> n >> m ;

    while(n--){
        int a, b;
        cin >> a >> b;

        fill(existance.begin()+a,existance.begin()+b+1,true);
    }

    while(m--){
        int num;
        cin >> num;

        cout << existance[num] << " ";
    }
}
