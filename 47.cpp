//
//  47.cpp
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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> tmp;
        vector<bool> used(nums.size(), false);
        vector<vector<int>> res;
        backtrack(res, tmp, nums, used);
        return res;
    }
    
    void backtrack(vector<vector<int>> &res, vector<int> &temp, vector<int> &nums, vector<bool> used){
        if(temp.size()==nums.size()) res.push_back(temp);
        else{
            for(int i=0; i<nums.size();i++){
                if(used[i]|| i>0 && nums[i]==nums[i-1] && !used[i-1]) continue;
                used[i]=true;
                temp.push_back(nums[i]);
                backtrack(res,temp,nums, used);
                used[i]=false;
                temp.pop_back();
            }
        }
    }
};
