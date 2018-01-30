//
//  15.cpp
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
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        if(nums.size()==0) return res;
        for(int i=0; i<nums.size()-1; i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int lo=i+1, hi=nums.size()-1, sum=0-nums[i];
                while(lo<hi){
                    if(nums[lo]+nums[hi]==sum){
                        vector<int> tmp;
                        tmp.push_back(nums[lo]);
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[hi]);
                        res.push_back(tmp);
                        while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                        while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                        lo++;
                        hi--;
                    }else if(nums[lo]+nums[hi]<sum) lo++;
                    else hi--;
                }
                //res.push_back(tmp);
            }
        }
        return res;
    }
};
