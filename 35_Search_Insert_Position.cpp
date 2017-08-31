//
//  35_Search_Insert_Position.cpp
//  leetcode
//
//  Created by R Z on 2017/8/24.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for(int i=0; i<nums.size(); i++){
            if(i==0 && nums[0] > target){
                return 0;
            }
            if(nums[i] - target == 0){
                return i;
            }
            if(nums[i] > target){
                return i;
            }
        }
        
        return nums.size();
    }
};
