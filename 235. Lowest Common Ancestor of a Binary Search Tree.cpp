//
//  235. Lowest Common Ancestor of a Binary Search Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/10/31.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        int va = root->val;
        int mi = min(p->val, q->val);
        int ma = max(p->val, q->val);
        if(va < mi){
            return lowestCommonAncestor(root->right, p, q);
        }else if(va > ma){
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};
