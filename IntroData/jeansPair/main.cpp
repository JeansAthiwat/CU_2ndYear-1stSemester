#include <iostream>
#include "pair.h"


using namespace std;

int main() {
    CP::pair<int,int> jeans(2,3);
    CP::pair<int,int> jack(2,3);
    CP::pair<int,int> defaultcon;
    //jeans.sex(5);
    /*bool hasSex =  jeans < jack;
    if(hasSex) {
        cout << "double hee";
    } else {
        cout << "noob";
    }*/
    if(jeans == jack){
        cout << " sex equals";
    }else{cout << " racista";}

    jeans.print_value();
    defaultcon.print_value();
    return 0;
}
