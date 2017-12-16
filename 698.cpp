//
//  698.cpp
//  leetcode
//
//  Created by R Z on 2017/12/16.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0;
        for(int n : nums){
            sum+=n;
        }
        if(k<0 || sum%k!=0) return false;
        vector<int> visited(nums.size(),0);
        return canPartition(nums, visited, 0, k, 0, 0, sum/k);
    }
    
    bool canPartition(vector<int> &nums, vector<int> &visited, int index_start, int k, int cur_sum, int cur_num, int target){
        if(k==1) return true;
        if(cur_sum==target && cur_sum>0) return canPartition(nums, visited, 0, k-1,0,0,target);
        for(int i=index_start; i<nums.size(); i++){
            if(!visited[i]){
                visited[i]=1;
                if(canPartition(nums,visited,i+1,k,cur_sum+nums[i],cur_num++,target)) return true;
                visited[i]=0;
            }
        }
        return false;
    }
};
