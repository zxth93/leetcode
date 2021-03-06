//
//  111. Minimum Depth of Binary Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/10/23.
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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        return root->left == NULL || root->right == NULL ? 1+max(minDepth(root->left), minDepth(root->right)) : 1+min(minDepth(root->left), minDepth(root->right));
    }
};
