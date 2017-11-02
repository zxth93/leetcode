//
//  101. Symmetric Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/11/2.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
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
    bool isSymmetric(TreeNode* root) {
        return root==NULL || isSymmetricHelp(root->left, root->right);
    }
    
    bool isSymmetricHelp(TreeNode* l, TreeNode* r){
        if(l==NULL || r==NULL) return l==r;
        if(l->val != r->val) return false;
        return isSymmetricHelp(l->left, r->right) && isSymmetricHelp(l->right, r->left);
    }
};
