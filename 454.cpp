//
//  454.cpp
//  leetcode
//
//  Created by R Z on 2017/11/22.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int,int> abHash;
        for(auto a : A){
            for(auto b : B){
                ++abHash[a+b];
            }
        }
        int count=0;
        for(auto c : C){
            for(auto d : D){
                auto itr = abHash.find(0-c-d);
                if(itr!=abHash.end()) count+= itr->second;
            }
        }
        return count;
    }
};
