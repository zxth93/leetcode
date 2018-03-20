//
//  59.cpp
//  leetcode
//
//  Created by R Z on 2018/3/20.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n));
        if(n==1){
            res[0][0]=1;
            return res;
        }
        int data=1;
        int circle = (n-1)/2+1;
        for(int i=0; i<circle;i++){
            for(int j=i;j<n-i;j++) res[i][j]=data++;
            for(int k=i+1;k<n-i;k++) res[k][n-i-1]=data++;
            for(int m=n-i-2;m>=i&&(n-i-1!=i);m--) res[n-i-1][m]=data++;
            for(int p=n-i-2;p>i&&(n-i-1!=i);p--) res[p][i]=data++;
        }
        return res;
    }
};
