//
//  238.cpp
//  leetcode
//
//  Created by R Z on 2018/4/8.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> res(len);
        res[0]=1;
        for(int i=1; i<len; i++){
            res[i]=res[i-1]*nums[i-1];
        }
        int right = 1;
        for(int i=len-1; i>=0;i--){
            res[i]*=right;
            right*=nums[i];
        }
        return res;
    }
};
