//
//  581_Shortest_Unsorted_Continuous_Subarray.cpp
//  leetcode
//
//  Created by R Z on 2017/8/18.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        int result=0;
        while(l < r){
            int lnum = nums[l];
            int rnum = nums[r];
            if(lnum <= rnum){
                if(lnum <= nums[l+1]){
                    l++;
                }
                if(rnum >= nums[r-1]){
                    r--;
                }
            }else{
                result = r - l + 1;
                break;
            }
        }
        return result;
    }
};
