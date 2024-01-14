#include <iostream>
#include <set>

using namespace std;

int main() {
    cout << "test" << endl;

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    set<int>::iterator it = --s.end(); // 5
    it--; // 4
    it--; // 3
    cout << "itBefore :" << *it << endl;
    for(auto &x : s) {
        cout << x << " ";
    }
    cout << endl;
    s.erase(it); // erase 3
    for(auto &x : s) {
        cout << x << " ";
    }
    cout << endl;
    cout << "itAfter :" << *it << endl; // should be 4?

    cout << "sex : " << 5 + *it << endl;
    cout << "Hello world!" << endl;
    return 0;
}
