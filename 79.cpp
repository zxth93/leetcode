//
//  79.cpp
//  leetcode
//
//  Created by R Z on 2018/3/21.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<int>> used(rows,vector<int>(cols,0));
        for(int i=0;i<rows;i++){
            for(int j=0; j<cols;j++){
                if(backtrack(board,rows,cols,i,j,used,word,0)) return true;
            }
        }
        return false;
    }
    
    bool backtrack(vector<vector<char>> &board, int rows, int cols, int i, int j, vector<vector<int>> &used, string word, int index){
        if(word[index]=='\0') return true;
        if(i<rows && i>=0 &&
           j<cols && j>=0 &&
           !used[i][j] && word[index]==board[i][j]){
            used[i][j]=1;
            bool flag = backtrack(board,rows,cols,i,j+1,used,word,index+1) ||
            backtrack(board,rows,cols,i,j-1,used,word,index+1) ||
            backtrack(board,rows,cols,i-1,j,used,word,index+1) ||
            backtrack(board,rows,cols,i+1,j,used,word,index+1);
            if(!flag) used[i][j]=0;
            else return true;
        }
        return false;
    }
};
