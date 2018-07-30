//
//  98.cpp
//  leetcode
//
//  Created by R Z on 2018/7/30.
//  Copyright © 2018年 R Z. All rights reserved.
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
    bool isValidBST(TreeNode* root) {
        TreeNode* pre=NULL;
        return validate(root, pre);
    }
    
    bool validate(TreeNode* root, TreeNode* &pre){
        if(root==NULL) return true;
        if(!validate(root->left, pre)) return false;
        if(pre!=NULL && pre->val>=root->val) return false;
        pre=root;
        return validate(root->right,pre);
    }
};
