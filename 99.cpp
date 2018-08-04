//
//  99.cpp
//  leetcode
//
//  Created by R Z on 2018/8/4.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <limits.h>
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
    TreeNode* first=NULL;
    TreeNode* second=NULL;
    TreeNode* prev = new TreeNode(INT_MIN);
public:
    void recoverTree(TreeNode* root) {
        help(root);
        swap(first->val, second->val);
    }
    
    void help(TreeNode* root){
        if(root==NULL)  return;
        help(root->left);
        if(first==NULL && prev->val >= root->val)   first=prev;
        if(first!=NULL && prev->val >= root->val)   second=root;
        prev=root;
        help(root->right);
    }
};
