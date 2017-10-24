//
//  538. Convert BST to Greater Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/9/26.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
private:
    int sum=0;
public:
    TreeNode* convertBST(TreeNode* root) {
        travel(root);
        return root;
    }
    void travel(TreeNode* root){
        if(root == NULL) return;
        travel(root->right);
        sum += root->val;
        root->val = sum;
        travel(root->left);
    }
};
