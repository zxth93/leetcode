//
//  45.cpp
//  leetcode
//
//  Created by R Z on 2018/3/17.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int len = nums.size();
        if(len<2) return 0;
        int curMax=0,nextMax=0,i=0, level=0;
        while(curMax-i+1>0){
            level++;
            for(;i<=curMax;i++){
                nextMax=max(nextMax,nums[i]+i);
                if(nextMax>=len-1) return level;
            }
            curMax=nextMax;
        }
        return 0;
    }
};
