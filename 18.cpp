//
//  18.cpp
//  leetcode
//
//  Created by R Z on 2018/2/2.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<vector<int>> res;
        if(len<4) return res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<len-3; i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<len-2;j++){
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                int sum=target-nums[i]-nums[j];
                int m=j+1,n=len-1;
                while(m<n){
                    if(sum==nums[m]+nums[n]){
                        res.push_back(vector<int>{nums[i],nums[j],nums[m],nums[n]});
                        do{m++;}while(nums[m]==nums[m-1]&&m<n);
                        do{n--;}while(nums[n]==nums[n+1]&&m<n);
                    }else if(sum>nums[m]+nums[n]) m++;
                    else n--;
                }
            }
        }
        return res;
    }
};
