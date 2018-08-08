//
//  114.cpp
//  leetcode
//
//  Created by R Z on 2018/8/8.
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
private:
    TreeNode* pre=NULL;
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->right=pre;
        root->left=NULL;
        pre=root;
    }
};
