//
//  39.cpp
//  leetcode
//
//  Created by R Z on 2018/3/8.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        vector<int> tmp;
        backtrack(res, tmp, candidates,target, 0);
        return res;
    }
    
    void backtrack(vector<vector<int>> &res, vector<int> &temp, vector<int> &candidates, int remain, int start){
        if(remain<0) return;
        else if(remain==0) res.push_back(temp);
        else{
            for(int i=start; i<candidates.size(); i++){
                temp.push_back(candidates[i]);
                backtrack(res, temp, candidates, remain-candidates[i], i);
                temp.pop_back();
            }
        }
    }
};
