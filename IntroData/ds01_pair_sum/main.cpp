#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
std::string canCombineToAnswer(const std::vector<int> &elements, int target) {
    int left = 0;
    int right = elements.size() - 1;

    while (left < right) {
        int currentSum = elements[left] + elements[right];
        if (currentSum == target) {
            return "YES";
        } else if (currentSum < target) {
            ++left;
        } else {
            --right;
        }
    }

    return "NO";
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> elements(n);
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    sort(elements.begin(), elements.end());

    for (int i = 0; i < m; ++i) {
        int target;
        cin >> target;
        cout << canCombineToAnswer(elements, target) << "\n";
    }

    return 0;
}
