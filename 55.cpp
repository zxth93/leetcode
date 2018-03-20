//
//  55.cpp
//  leetcode
//
//  Created by R Z on 2018/3/20.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        int curMax=0, nextMax=0, i=0;
        while(curMax-i+1>0){
            for(;i<=curMax;i++){
                nextMax=max(nextMax,i+nums[i]);
                if(nextMax>=len-1) return true;
            }
            curMax=nextMax;
        }
        return false;
    }
};
