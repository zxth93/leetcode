//
//  SumOfLeftLeaves.cpp
//  leetcode
//
//  Created by R Z on 16/10/11.
//  Copyright © 2016年 R Z. All rights reserved.
//
/**
 * struct TreeNode{
 *      int val;
 *      TreeNode* left;
 *      TreeNode* right;
 *      TreeNode(int x) : val(x), lefet(NULL),right(NULL){}
 * };
 */
#include <stdio.h>
#include <iostream>

using namespace std;
/*class Solution{
    public:
        int sumOfLeftLeaves(TreeNode* root){
            if(root == NULL){
                return 0;
            }

            if(root->left == NULL && root->right == NULL){
                return root->val;
            }

            int result = 0;
            result += sumOfLeftLeaves(root->left);
            result += SumOfLeftLeaves(root->right);
            return result;
        }
};*/
