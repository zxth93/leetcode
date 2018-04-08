//
//  229.cpp
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
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        if(nums.size()==0) return res;
        int num1=nums[0], num2=nums[0], count1=1, count2=0;
        for(int n :nums){
            if(n==num1) count1++;
            else if(n==num2) count2++;
            else if(count1==0){
                num1=n;
                count1++;
            }else if(count2==0){
                num2=n;
                count2++;
            }else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int n: nums){
            if(n==num1) count1++;
            else if(n==num2) count2++;
        }
        if(count1>nums.size()/3) res.push_back(num1);
        if(count2>nums.size()/3) res.push_back(num2);
        return res;
    }
};
