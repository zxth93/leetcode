//
//  110. Balanced Binary Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/10/23.
//  Copyright © 2017年 R Z. All rights reserved.
//
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int l = depth(root->left);
        int r = depth(root->right);
        return abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right);
    }
    int depth(TreeNode* root){
        if(!root) return 0;
        return 1 + max(depth(root->left), depth(root->right));
    }
};

class Solution2 {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root) != -1;
    }
    int dfsHeight(TreeNode* root){
        if(!root) return 0;
        int l = dfsHeight(root->left);
        if(l==-1) return -1;
        int r = dfsHeight(root->right);
        if(r==-1) return -1;
        if(abs(l-r)>1) return -1;
        return 1 + max(dfsHeight(root->left), dfsHeight(root->right));
    }
};
