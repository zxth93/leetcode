//
//  1_TwoSum.cpp
//  leetcode
//
//  Created by R Z on 2017/8/15.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int i,j;
        
        for(i=0; i<nums.size()-1; i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        
        return result;
    }
};
