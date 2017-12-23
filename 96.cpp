//
//  96.cpp
//  leetcode
//
//  Created by R Z on 2017/12/23.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> res(n+1);
        res[0]=res[1]=1;
        for(int i=2; i<=n; i++){
            for(int j=1; j<=i; j++){
                res[i]+=res[j-1]*res[i-j];
            }
        }
        return res[n];
    }
};
