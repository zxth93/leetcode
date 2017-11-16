//
//  645. Set Mismatch.cpp
//  leetcode
//
//  Created by R Z on 2017/9/18.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <math>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> hash;
        vector<int> result;
        for(int i=0; i<n; i++){
            if(hash.count(nums[i])){
                hash[nums[i]] += 1;
            }else{
                hash[nums[i]] = 1;
            }
        }
        int end=0;
        int dul=0;
        for(int i=1; i<=n; i++){
            if(hash[i] == 2){
                dul=i;
            }
            if(!hash[i]) end=i;
        }
        result.push_back(dul);
        result.push_back(end);
        return result;
    }
    
    vector<int> findErrorNums2(vector<int>& nums){
        int[] res = new int[2];
        for (int i : nums) {
            if (nums[Math.abs(i) - 1] < 0) res[0] = Math.abs(i);
            else nums[Math.abs(i) - 1] *= -1;
        }
        for (int i=0;i<nums.length;i++) {
            if (nums[i] > 0) res[1] = i+1;
        }
        return res;
    }
};
