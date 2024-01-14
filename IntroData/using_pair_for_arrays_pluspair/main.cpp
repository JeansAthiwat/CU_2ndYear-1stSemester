#include <iostream>
#include <array>

    using namespace std;
int main () {

    /*int tmp[5] = {1,2,3,4,5};
    int * tmpPointer = tmp;
    //cout << tmp[4];
    pair<int *,pair<bool,float>> textDatStruct = {tmp,pair<bool,float> {true,20}};
    //pair<int,pair<bool,float>> textDatStruct = {5,pair<bool,float> {true,20}};
    cout << "The 3rd member of an array is: " << textDatStruct.first[2] << "\nThe second member of pair is : " << textDatStruct.second.second << "\nThe first member of pair is : " << textDatStruct.second.first;;

    return 0;*/

    array<int,7> arr = {1,2,3,4,5,6,7};
    pair<array<int,7> , pair< bool , float > > nigger = {arr, {true, 3.141}};
    cout << "arr3:" << nigger.first[2] << "pairfirst:" << nigger.second.first << endl;
}
