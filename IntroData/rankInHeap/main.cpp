#include <iostream>
#include <vector>
#include "priority_queue.h"
#include "student.h"


void case1() {
  CP::priority_queue<int> pq;
  int n,m;
  std::cin >> n >> m;
  for (int i = 0;i < n;i++) {
    int x;
    std::cin >> x;
    pq.push(x);
  }

  for (int i = 0;i < m;i++) {
    int x;
    std::cin >> x;
    std::cout << pq.get_rank(x) << std::endl;
  }
}

void case2() {
  CP::priority_queue<int,std::greater<int>> pq;
  int n,m;
  std::cin >> n >> m;
  for (int i = 0;i < n;i++) {
    int x;
    std::cin >> x;
    pq.push(x);
  }

  for (int i = 0;i < m;i++) {
    int x;
    std::cin >> x;
    std::cout << pq.get_rank(x) << std::endl;
  }
}


int main() {
  std::ios_base::sync_with_stdio(false);std::cin.tie(0);
  int case_num;
  cin >> case_num;
  if (case_num == 0) case1();
  else if (case_num == 1) case2();
}



