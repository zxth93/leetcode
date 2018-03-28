//
//  90.cpp
//  leetcode
//
//  Created by R Z on 2018/3/28.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        vector<int> tmp;
        subsets(res,tmp, nums, 0);
        return res;
    }
    
    void subsets(vector<vector<int>> &res, vector<int> &temp, vector<int> &nums, int start){
        res.push_back(temp);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            subsets(res,temp,nums,i+1);
            temp.pop_back();
        }
    }
};
