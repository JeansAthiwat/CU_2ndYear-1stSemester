#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
    // Your code here
    //debug();
    auto itJames = std::upper_bound(aux.begin(),aux.end(),index);
    if((aux.size() != 0) && (itJames != aux.end())) {
        int bucket = itJames - aux.begin(); // get the bucket where index lives
        if(bucket > 0) index -= aux[bucket-1];

        if((mData[bucket].size()-index) < (mData.size()-bucket) ) { // if insertion inside the bucket uses less resource?
            mData[bucket].insert(mData[bucket].begin()+index, value.begin(),value.end());
            for(int tmp_bucket = bucket; tmp_bucket < aux.size(); tmp_bucket++) {
                aux[tmp_bucket] += value.size();
            }
        } else { // split da vector and
            //int oldSize = mData[bucket].size();
            std::vector<T> tmp; //'''
            tmp.insert(tmp.end(), mData[bucket].begin() + index, mData[bucket].end());
            mData[bucket].erase(mData[bucket].begin() + index, mData[bucket].end()); // std::vector<T>::iterator containerEndIt =
            mData[bucket].insert(mData[bucket].begin() + index, value.begin(),value.end());
            mData.insert(mData.begin() + bucket + 1, tmp);
            aux[bucket] = aux[bucket] - tmp.size() + value.size();
            if(!tmp.empty()) {
                aux.insert(aux.begin() + bucket + 1, aux[bucket] + tmp.size());
                for(int i = bucket + 2; i < aux.size(); i++) {
                    aux[i] += value.size();
                }
            } else {
                for(int i = bucket + 1; i < aux.size(); i++) {
                    aux[i] += value.size();
                }
            }

            //std::cout << "sex\n\n\n";
        }
    } else if(aux.size() != 0) { // bucket == mData.end()
        //push_back (value vec in da mData)
        mData.push_back(value);
        aux.push_back(aux.back()+value.size());
        //push back last aux
    } else {
        mData.push_back(value);
        aux.push_back(value.size());
    }
    mCap += value.size();
    mSize += value.size();


    //std::cout << "AFTER DA OPPA\n";
    //debug();

}

#endif

