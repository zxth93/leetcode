//
//  209.cpp
//  leetcode
//
//  Created by R Z on 2017/12/8.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int len = nums.size();
        if(len==0) return 0;
        int res=INT_MAX;
        int i=0,j=0,sum=0;
        while(j<len){
            sum+=nums[j++];
            while(sum>=s){
                res = min(res,j-i);
                sum-=nums[i++];
            }
        }
        return res==INT_MAX?0:res;
    }
};
