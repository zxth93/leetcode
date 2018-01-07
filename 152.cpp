//
//  152.cpp
//  leetcode
//
//  Created by R Z on 2018/1/7.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int pMax=0, nMax=0, m=0;
        for(int i=0; i<n; i++){
            if(nums[i]<0) swap(pMax, nMax);
            pMax=max(pMax*nums[i], nums[i]);
            nMax=min(nMax*nums[i], nums[i]);
            if(pMax>m) m = pMax;
        }
        return m;
    }
};
