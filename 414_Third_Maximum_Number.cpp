//
//  414_Third_Maximum_Number.cpp
//  leetcode
//
//  Created by R Z on 2017/8/23.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> bag;
        for(int i=0; i<nums.size(); i++){
            bag.insert(nums[i]);
            if(bag.size() > 3){
                bag.erase(bag.begin());
            }
        }
        
        return bag.size() == 3 ? *bag.begin() :*bag.rbegin();
    }
};
