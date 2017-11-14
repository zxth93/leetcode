//
//  222. Count Complete Tree Nodes.cpp
//  leetcode
//
//  Created by R Z on 2017/11/14.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <math.h>


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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int l=0, r=0;
        TreeNode *lp=root, *rp=root;
        while(lp){l++; lp=lp->left;}
        while(rp){r++; rp=rp->right;}
        if(l==r) return pow(2,l)-1;
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};
