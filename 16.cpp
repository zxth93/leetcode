//
//  16.cpp
//  leetcode
//
//  Created by R Z on 2018/1/30.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        int gap=INT_MAX;
        int res = 0;
        if(len==0) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<len-2; i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int lo=i+1, hi=len-1, sum=target-nums[i];
                while(lo<hi){
                    if(nums[lo]+nums[hi]==sum) return target;
                    else if(nums[lo]+nums[hi]<sum){
                        if(abs(nums[lo]+nums[hi]-sum)<gap){
                            gap=abs(nums[lo]+nums[hi]-sum);
                            res=target-gap;
                        }
                        lo++;
                    }else{
                        if(abs(nums[lo]+nums[hi]-sum)<gap){
                            gap=abs(nums[lo]+nums[hi]-sum);
                            res=target+gap;
                        }
                        hi--;
                    }
                }
            }
        }
        return res;
    }
};
