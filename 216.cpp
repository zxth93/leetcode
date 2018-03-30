//
//  216.cpp
//  leetcode
//
//  Created by R Z on 2018/3/30.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> tmp;
        backtrack(res, tmp, k, n, 1);
        return res;
    }
    
    void backtrack(vector<vector<int>> &res, vector<int> &temp, int k, int remain, int start){
        if(k==0 && remain==0){
            res.push_back(temp);
            return;
        }else{
            for(int i=start;i<10;i++){
                temp.push_back(i);
                backtrack(res, temp,k-1,remain-i,i+1);
                temp.pop_back();
            }
        }
    }
};
