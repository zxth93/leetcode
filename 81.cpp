//
//  81.cpp
//  leetcode
//
//  Created by R Z on 2017/11/30.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.size()==0) return false;
        int lo =0, hi = nums.size()-1;
        int mid = 0;
        while(lo<hi){
            mid=(lo+hi)/2;
            if(nums[mid]==target) return true;
            if(nums[mid]>nums[hi]){
                if(nums[mid]>target && nums[lo] <= target) hi = mid;
                else lo = mid + 1;
            }else if(nums[mid] < nums[hi]){
                if(nums[mid]<target && nums[hi] >= target) lo = mid + 1;
                else hi = mid;
            }else{
                hi--;
            }
        }
        return nums[lo] == target ? true : false;
    }
};
