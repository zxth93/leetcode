//
//  581_Shortest_Unsorted_Continuous_Subarray.cpp
//  leetcode
//
//  Created by R Z on 2017/8/18.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int length = nums.size();
        int beg = -1;
        int end = -2;
        int max = nums[0];
        int min = nums[length-1];
        for(int i=1; i<length; i++){
            max = max<nums[i]?nums[i]:max;
            min = min>nums[length-i-1]?nums[length-i-1]:min;
            if(max>nums[i]) end=i;
            if(min<nums[length-i-1]) beg=length-i-1;
        }
        
        return end-beg+1;
    }
};
