//
//  740.cpp
//  leetcode
//
//  Created by R Z on 2017/12/12.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> hash(10001,0);
        for(int n :nums)
            hash[n]+=n;
        int pre=0, cur=0;
        for(int i=0; i<10001; i++){
            int temp=cur;
            cur=max(pre+hash[i],cur);
            pre=temp;
        }
        return cur;
    }
};
