//
//  718.cpp
//  leetcode
//
//  Created by R Z on 2017/12/5.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int m=A.size(), n=B.size();
        if(!m || !n) return 0;
        int res = 0;
        vector<int> dp(n+1);
        for(int i=m-1; i>=0; i--){
            for(int j=0; j<n; j++){
                res = max(res, dp[j]=A[i]==B[j]?1+dp[j+1]:0);
            }
        }
        return res;
    }
    
};
