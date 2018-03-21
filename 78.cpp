//
//  78.cpp
//  leetcode
//
//  Created by R Z on 2018/3/21.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        vector<int> tmp;
        backtrack(res, tmp, nums, 0);
        return res;
    }
    
    void backtrack(vector<vector<int>> &res, vector<int> &temp, vector<int> &nums, int start){
        res.push_back(temp);
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            backtrack(res, temp,nums,i+1);
            temp.pop_back();
        }
    }
};
