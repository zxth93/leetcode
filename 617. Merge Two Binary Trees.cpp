//
//  617. Merge Two Binary Trees.cpp
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
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1!=NULL && t2!=NULL){
            t1->val += t2->val;
        }else if(t1==NULL){
            return t2;
        }else if(t2==NULL){
            return t1;
        }else{
            return NULL;
        }
        t1->left = mergeTrees(t1->left,t2->left);
        t1->right = mergeTrees(t1->right,t2->right);
        return t1;
    }
};
