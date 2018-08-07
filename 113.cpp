//
//  113.cpp
//  leetcode
//
//  Created by R Z on 2018/8/7.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
/**
 * Definition for a binary tree node.*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        vector<int> tmp;
        getPath(res,tmp,root,sum);
        return res;
    }
    
    void getPath(vector<vector<int>> &res, vector<int> &tmp, TreeNode* root, int remain){
        if(root==NULL){
            return;
        }
        tmp.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==remain) res.push_back(tmp);
        getPath(res,tmp,root->left,remain-root->val);
        getPath(res,tmp,root->right,remain-root->val);
        tmp.pop_back();
        
    }
};
