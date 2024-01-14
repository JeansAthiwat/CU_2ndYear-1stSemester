#ifndef PAIR_H_INCLUDED
#define PAIR_H_INCLUDED

#include <iostream>

namespace CP {
template<typename T1, typename T2>
class pair {
  public:
    pair() : first() , second() {}
    pair(const T1 a,const T2 b) : first(a) , second(b) {}
  public:
    T1 first;
    T2 second;

    bool operator==(const CP::pair<T1,T2>& other) const {
        return first == other.first && second == other.second;
    }
    bool operator<(const CP::pair<T1,T2>& other) const {
        return ((first < other.first) || (first == other.first && second < other.second));
    }

    void print_value(){
        std::cout << first << ":" << second;
    }
};


}

#endif // PAIR_H_INCLUDED
