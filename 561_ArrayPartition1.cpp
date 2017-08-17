//
//  561_ArrayPartition1.cpp
//  leetcode
//
//  Created by R Z on 2017/8/16.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i =0; i<nums.size();i+=2){
            sum += nums[i];
        }
        return sum;
    }
};
