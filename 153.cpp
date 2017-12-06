//
//  153.cpp
//  leetcode
//
//  Created by R Z on 2017/12/6.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int lo=0, hi=nums.size()-1;
        while(lo<hi){
            int mid= (lo+hi)/2;
            if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid;
        }
        return nums[lo];
    }
};
