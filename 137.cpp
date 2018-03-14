//
//  137.cpp
//  leetcode
//
//  Created by R Z on 2018/3/14.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0; i<32; i++){
            int count=0;
            for(int n : nums){
                int tmp = n>>i;
                count += tmp&1;
            }
            int m = count%3;
            res = res^(m<<i);
        }
        return res;
    }
};
