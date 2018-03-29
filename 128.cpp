//
//  128.cpp
//  leetcode
//
//  Created by R Z on 2018/3/29.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0;
        unordered_map<int, int> hash;
        for(int n : nums){
            if(hash.find(n)==hash.end()){
                int left = hash.find(n-1)!=hash.end()?hash[n-1]:0;
                int right = hash.find(n+1)!=hash.end()?hash[n+1]:0;
                int sum=left+right+1;
                res=max(res,sum);
                hash[n]=sum;
                hash[n-left]=sum;
                hash[n+right]=sum;
            }
            else continue;
        }
        return res;
    }
};
