//
//  228.cpp
//  leetcode
//
//  Created by R Z on 2018/4/8.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int len = nums.size();
        vector<string> res;
        if(len==0) return res;
        
        for(int i=0;i<len;i++){
            int tmp = nums[i];
            while(i+1<len && nums[i]+1==nums[i+1]) i++;
            if(tmp!=nums[i]) res.push_back(to_string(tmp)+"->"+to_string(nums[i]));
            else res.push_back(to_string(tmp));
        }
        
        return res;
    }
};
