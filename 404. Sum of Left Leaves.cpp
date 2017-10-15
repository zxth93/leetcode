//
//  404. Sum of Left Leaves.cpp
//  leetcode
//
//  Created by R Z on 2017/10/10.
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
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(!root) return 0;
        
        if(root->left && !root->left->left && !root->left->right) return root->left->val + sumOfLeftLeaves(root->right);
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
    
    
};
