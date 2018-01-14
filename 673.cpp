//
//  673.cpp
//  leetcode
//
//  Created by R Z on 2018/1/14.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size(), res=0, max_len=0;
        vector<int> len(n);
        vector<int> cnt(n);
        for(int i=0; i<n; i++){
            len[i]=1, cnt[i]=1;
            for(int j=0; j<i; j++){
                if(nums[i]>nums[j]){
                    if(len[i]==len[j]+1) cnt[i]+=cnt[j];
                    if(len[i]<len[j]+1){
                        len[i]=len[j]+1;
                        cnt[i]=cnt[j];
                    }
                }
            }
            if(len[i]==max_len) res+=cnt[i];
            if(len[i]>max_len){
                max_len=len[i];
                res=cnt[i];
            }
        }
        return res;
    }
};
