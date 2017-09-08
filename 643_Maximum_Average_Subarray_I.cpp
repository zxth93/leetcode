//
//  643_Maximum_Average_Subarray_I.cpp
//  leetcode
//
//  Created by R Z on 2017/8/25.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int max = 0;
        for(int i=0; i<nums.size(); i++){
            if(i<k){
                sum += nums[i];
                max = sum;
            }else{
                sum = sum+nums[i]-nums[i-k];
                max = max > sum ? max : sum;
            }
            
        }
        
        return max/(float)k;
    }
    
    double findMaxAverage2(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) sum += nums[i];
        int max = sum;
        
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            max = max > sum ? max : sum;
        }
        
        return max / 1.0 / k;
    }
};
