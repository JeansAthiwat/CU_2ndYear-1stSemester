#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
    //WRITE YOUR CODE HERE
    stack<int> number;

    for(auto &p : v) {
        if(p.first == 0) {
            int b = number.top();
            number.pop();
            int a = number.top();
            number.pop();

            switch(p.second) {
            case 0 :
                number.push(a + b);
                break;
            case 1:
                number.push(a - b);
                break;
            case 2:
                number.push(a* b);
                break;
            case 3:
                number.push(a/b);
                break;
            }
        }
        else{
            number.push(p.second);
        }
    }



    return number.top();
    //DON"T FORGET TO RETURN THE RESULT
}

#endif

