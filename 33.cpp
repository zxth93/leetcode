//
//  33.cpp
//  leetcode
//
//  Created by R Z on 2017/11/19.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using std::vector;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0) return -1;
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int mid=(r+l)/2;
            if(nums[mid]>nums[r]) l=mid+1;
            else r=mid;
        }
        int rot=l;
        l=0,r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            int realmid=(mid+rot)%nums.size();
            if(nums[realmid]==target) return realmid;
            if(nums[realmid]<target) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
};
