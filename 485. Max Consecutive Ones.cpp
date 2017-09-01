//
//  485. Max Consecutive Ones.cpp
//  leetcode
//
//  Created by R Z on 2017/8/31.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int flag = 1;
        int count = 0;
        int max = 0;
        for(int i=0; i<nums.size(); i++){
            if(flag & nums[i]){
                count++;
            }else{
                max= max>count?max:count;
                count=0;
            }
        }
        
        return max>count?max:count;
    }
};
