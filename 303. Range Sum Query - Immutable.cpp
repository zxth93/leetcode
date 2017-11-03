//
//  303. Range Sum Query - Immutable.cpp
//  leetcode
//
//  Created by R Z on 2017/11/3.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;
class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int> nums) {
        for(int i=1; i<nums.size(); i++){
            nums[i] += nums[i-1];
        }
        this->nums = nums;
    }
    
    int sumRange(int i, int j) {
        if(i==0) return nums[j];
        return nums[j]-nums[i-1];
    }
};
