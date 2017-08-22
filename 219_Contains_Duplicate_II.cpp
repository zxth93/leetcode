//
//  219_Contains_Duplicate_II.cpp
//  leetcode
//
//  Created by R Z on 2017/8/22.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size() < 2 || k < 1){
            return false;
        }
        unordered_map<int, int> hash;
        bool flag = false;
        for(int i=0; i<nums.size(); i++){
            if(hash.find(nums[i]) != hash.end()){
                if(i - hash[nums[i]] <= k){
                    flag = true;
                    break;
                }
            }
            hash[nums[i]] = i;
        }
        
        return flag;
    }
};
