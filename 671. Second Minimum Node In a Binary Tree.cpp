//
//  671. Second Minimum Node In a Binary Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/10/19.
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
    int findSecondMinimumValue(TreeNode* root) {
        
        if(root->left){
            if(root->left->val < root->right->val){
                int l = findSecondMinimumValue(root->left);
                if(l==-1) return root->right->val;
                return min(l, root->right->val);
            }else if(root->left->val > root->right->val){
                int r = findSecondMinimumValue(root->right);
                if(r==-1) return root->left->val;
                return min(r, root->left->val);
            }else{
                int l = findSecondMinimumValue(root->left);
                int r = findSecondMinimumValue(root->right);
                if(l==-1) return r;
                if(r==-1) return l;
                return min(l, r);
            }
        }else{
            return -1;
        }
        
        return -1;
    }
};
