//
//  34.cpp
//  leetcode
//
//  Created by R Z on 2017/11/22.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        if(nums.size()==0) return res;
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]<target) l=mid+1;
            else r=mid;
        }
        
        if(nums[l]!=target) return res;
        else res[0]=l;
        
        r=nums.size()-1;
        while(l<r){
            int mid=(l+r)/2+1;
            if(nums[mid]>target) r=mid-1;
            else l=mid;
        }
        res[1]=r;
        return res;
    }
};
