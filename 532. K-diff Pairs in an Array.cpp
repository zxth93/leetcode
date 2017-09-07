//
//  532. K-diff Pairs in an Array.cpp
//  leetcode
//
//  Created by R Z on 2017/8/29.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;


class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0){
            return 0;
        }
        unordered_map<int, int> slot;
        unordered_set<int> result;
        for(int i=0; i<nums.size(); i++){
            if(slot.count(nums[i] - k)){
                result.insert(nums[i]-k);
            }
            if(slot.count(nums[i] + k)){
                result.insert(nums[i]);
            }
            slot[nums[i]] +=1;
        }
        
        return result.size();
    }
};
