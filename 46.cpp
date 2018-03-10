//
//  46.cpp
//  leetcode
//
//  Created by R Z on 2018/3/10.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        backtrack(res, tmp, nums);
        return res;
    }
    
    void backtrack(vector<vector<int>> &res, vector<int> temp, vector<int> &nums){
        if(temp.size()==nums.size()) res.push_back(temp);
        else{
            for(int i=0; i<nums.size();i++){
                if(contain(temp, nums[i])) continue;
                temp.push_back(nums[i]);
                backtrack(res,temp,nums);
                temp.pop_back();
            }
        }
    }
    
    bool contain(vector<int> &nums, int target){
        for(int i=0; i<nums.size();i++){
            if(nums[i]==target) return true;
        }
        return false;
    }
};
