//
//  189_Rotate_Array.cpp
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
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<k;i++){
            int temp = nums[n-1];
            nums.pop_back();
            nums.insert(nums.begin(), temp);
        }
    }
};
