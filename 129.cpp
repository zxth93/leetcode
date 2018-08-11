//
//  129.cpp
//  leetcode
//
//  Created by R Z on 2018/8/11.
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
    int res=0;
public:
    int sumNumbers(TreeNode* root) {
        return sumNumbersHelp(root,0);
    }
    
    int sumNumbersHelp(TreeNode* node, int n){
        if(!node) return 0;
        if(node->left==NULL && node->right==NULL) return n*10+node->val;
        return sumNumbersHelp(node->left,n*10+node->val)+sumNumbersHelp(node->right,n*10+node->val);
    }
};
