#include <vector>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    vector<bool> exist(100001);
    for(int i = 0 ; i< A.size(); i++) {
        v.push_back(A[i]);
        exist[A[i]] = 1;
    }
    for(int i = 0 ; i < B.size(); i++) {
        if(exist[B[i]]) {

        } else {
            v.push_back(B[i]);
        }
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    vector<bool> exist(100001);
    for(int i = 0 ; i < B.size(); i++) {
        exist[B[i]] = 1;

    }

    for(int i = 0 ; i< A.size(); i++) {
        if(exist[A[i]]) {
            v.push_back(A[i]);
        }
    }

    return v;
}
