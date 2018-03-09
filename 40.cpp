//
//  40.cpp
//  leetcode
//
//  Created by R Z on 2018/3/9.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        vector<int> tmp;
        backtrack(res, tmp, candidates, target, 0);
        return res;
    }
    
    void backtrack(vector<vector<int>> &res, vector<int> &temp, vector<int> nums, int remain, int start){
        if(remain<0) return;
        else if(remain==0) res.push_back(temp);
        else{
            for(int i=start; i<nums.size(); i++){
                if(i>start && nums[i]==nums[i-1]) continue;
                temp.push_back(nums[i]);
                backtrack(res, temp, nums, remain-nums[i], i+1);
                temp.pop_back();
            }
        }
    }
};
