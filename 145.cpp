//
//  145.cpp
//  leetcode
//
//  Created by R Z on 2018/8/11.
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        postHelp(root,res);
        return res;
    }
    
    void postHelp(TreeNode* root, vector<int> &res){
        if(!root) return;
        postHelp(root->left,res);
        postHelp(root->right,res);
        res.push_back(root->val);
    }
};
