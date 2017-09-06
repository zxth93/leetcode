//
//  665. Non-decreasing Array.cpp
//  leetcode
//
//  Created by R Z on 2017/8/31.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        for(int i=1; i<nums.size() && count<=1; i++){
            if(nums[i-1] > nums[i]){
                count++;
                if(i-2<0 || nums[i-2] < nums[i]){
                    nums[i - 1] = nums[i];
                }else{
                    nums[i] = nums[i-1];
                }
            }
        }
        
        return count<=1;
    }
};
