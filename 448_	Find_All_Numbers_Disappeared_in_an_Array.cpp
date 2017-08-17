//
//  448_	Find_All_Numbers_Disappeared_in_an_Array.cpp
//  leetcode
//
//  Created by R Z on 2017/8/16.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        vector<int> extra(nums.size(), 0);
        for(int i = 0 ; i<nums.size(); i++){
            extra[nums[i]-1]++;
        }
        for(int i = 0; i<nums.size(); i++){
            if(extra[i]==0){
                result.push_back(i+1);
            }
        }
        
        return result;
    }
};
