#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    map<int,int> sequence;
    set<int> a,b;

    int n,input;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        sequence[i] = input;
        a.insert(i);
        b.insert(input);
    }

    bool is_injective = b.size() == n;

    bool is_surjective = true;

    bool is_equal = a == b;


    cout << ((is_injective && is_surjective && is_equal) ? "YES" : "NO");

    return 0;
}
