//
//  162.cpp
//  leetcode
//
//  Created by R Z on 2018/3/30.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lo=0, hi=nums.size()-1;
        while(lo<hi){
            int mid=(lo+hi)/2;
            if(nums[mid]<nums[mid+1]) lo=mid+1;
            else hi=mid;
        }
        return lo;
    }
};
