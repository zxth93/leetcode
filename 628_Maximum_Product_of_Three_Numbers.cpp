//
//  628_Maximum_Product_of_Three_Numbers.cpp
//  leetcode
//
//  Created by R Z on 2017/8/24.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len = nums.size();
        int temp1 = nums[len-1]*nums[0]*nums[1];
        
        int temp2 = nums[len-1]*nums[len-2]*nums[len-3];
        
        return temp1>temp2?temp1:temp2;
    }
};
