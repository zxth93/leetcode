//
//  563. Binary Tree Tilt.cpp
//  leetcode
//
//  Created by R Z on 2017/11/2.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
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
    int result = 0;
    int findTilt(TreeNode* root) {
        postOrder(root);
        return result;
    }
    
    int postOrder(TreeNode* root){
        if(!root) return 0;
        int l = postOrder(root->left);
        int r = postOrder(root->right);
        result += abs(l-r);
        return l+r+root->val;
    }
};
