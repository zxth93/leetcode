//
//  230.cpp
//  leetcode
//
//  Created by R Z on 2017/12/6.
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
    int kthSmallest(TreeNode* root, int k) {
        int count = treeCount(root->left);
        if(k<=count){
            return kthSmallest(root->left, k);
        }else if(k>count+1){
            return kthSmallest(root->right,k-1-count);
        }
        return root->val;
    }
    
    int treeCount(TreeNode* n){
        if(!n) return 0;
        return 1+treeCount(n->left)+treeCount(n->right);
    }
};
