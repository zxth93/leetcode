//
//  77.cpp
//  leetcode
//
//  Created by R Z on 2018/8/14.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> tmp;
        combs(res,tmp,1,n,k);
        return res;
    }
    
    void combs(vector<vector<int>> &res, vector<int> &tmp, int start, int n, int k){
        if(k==0){
            res.push_back(tmp);
            return;
        }
        for(int i=start;i<=n;i++){
            tmp.push_back(i);
            combs(res,tmp,i+1,n,k-1);
            tmp.pop_back();
        }
    }
};
