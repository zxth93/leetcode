//
//  474.cpp
//  leetcode
//
//  Created by R Z on 2017/12/25.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> res(m+1, vector<int>(n+1, 0));
        for(auto &s : strs){
            int cZeros=0, cOnes=0;
            for(auto c : s){
                if(c=='0') cZeros++;
                else if(c=='1') cOnes++;
            }
            
            for(int i=m; i>=cZeros; i--){
                for(int j=n; j>=cOnes; j--){
                    res[i][j]=max(res[i][j], res[i-cZeros][j-cOnes]+1);
                }
            }
        }
        return res[m][n];
    }
};
