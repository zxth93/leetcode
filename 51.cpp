//
//  51.cpp
//  leetcode
//
//  Created by R Z on 2018/8/13.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> nQueue(n,string(n,'.'));
        solveHelp(res,nQueue,0,n);
        return res;
    }
    
    void solveHelp(vector<vector<string>> &res, vector<string> &nQueue, int row, int &n){
        if(row==n){
            res.push_back(nQueue);
            return;
        }
        for(int col=0;col<n;col++){
            if(isValid(nQueue,row,col,n)){
                nQueue[row][col]='Q';
                solveHelp(res,nQueue,row+1,n);
                nQueue[row][col]='.';
            }
        }
    }
    
    bool isValid(vector<string> &nQueue,int row,int col,int &n){
        for(int i=0;i!=row;i++){
            if(nQueue[i][col]=='Q') return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(nQueue[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
            if(nQueue[i][j]=='Q') return false;
        }
        return true;
    }
};
