//
//  486.cpp
//  leetcode
//
//  Created by R Z on 2017/12/27.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n));
        for(int i=0; i<n; i++) dp[i][i]=nums[i];
        for(int len=1; len<n; len++){
            for(int i=0; i<n-len;i++){
                int j = i+len;
                dp[i][j]=max(nums[i]-dp[i+1][j], nums[j]-dp[i][j-1]);
            }
        }
        return dp[0][n-1]>=0;
    }
    
    bool PredictTheWinner2(vector<int>& nums) {
        //if(nums==NULL) return true;
        int n = nums.size();
        if((n&1)==0) return true;
        vector<int> dp(n);
        for(int i=n-1; i>=0; i--){
            for(int j=i; j<n;j++){
                if(i==j) dp[i]=nums[i];
                else dp[j]=max(nums[i]-dp[j],nums[j]-dp[j-1]);
            }
        }
        return dp[n-1]>=0;
    }
};
