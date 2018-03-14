//
//  41.cpp
//  leetcode
//
//  Created by R Z on 2018/3/14.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            while(nums[i]>0 && nums[i]<=nums.size() && nums[nums[i]-1]!=nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size(); i++){
            if(nums[i]!=i+1) return i+1;
        }
        return nums.size()+1;
    }
};
