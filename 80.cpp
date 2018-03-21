//
//  80.cpp
//  leetcode
//
//  Created by R Z on 2018/3/21.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int n:nums){
            if(i<2||n>nums[i-2]) nums[i++]=n;
        }
        return i;
    }
};
