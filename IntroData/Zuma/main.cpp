#include <iostream>
#include <list>
using namespace std;

void printList(const std::list<int> & intList) {
    std::cout <<   "\n start list--- ";
    for (const auto& element : intList) {
        std::cout << element << " ";
    }
    std::cout <<   " ---end list \n";
}

int main() {
    for(int sdf = 0; sdf < 10; sdf++) {
        cout << "begin loop:" << sdf << "----------------\n";
        int n,k,v;
        cin >> n >> k >> v;

        list<int> li;
        while(n--) {
            short x;
            cin >> x;
            li.push_back(x);
        }

        printList(li);
        auto it = li.begin();
        for(int i = 0; i < k; i++) {
            ++it;
        }
        it = li.insert(it,v);
        printList(li);
        cout << *it ;

        auto itl = it;
        auto itr = it;
        ++itr;

        int cnt = 0;

        while(*itl == v) {
            if(itl == li.begin()) {
                break;
            }
            cnt++;
            --itl;
        }

        while(itr != li.end()) {
            if(*itr != v) {
                break;
            }
            cnt++;
            ++itr;
        }

        cout << "hey";
        if(cnt >= 3) {
            auto itdel = itl;
            while(cnt--) {
                printList(li);
                itdel = li.erase(itdel);
            }
            /*for(auto its = itl; its != itr; ++its) {
                printList(li);
                li.erase(its);
            }*/
        }
        printList(li);
// 7 1 1111111 0 1 2 3 4 5 6
        cout << "\n----------------" << "end loop:" << sdf << "----------------\n";

    }
    return 0;
}
