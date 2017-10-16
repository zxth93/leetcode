//
//  669. Trim a Binary Search Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/10/15.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution{
public:
    TreeNode* trimBST(TreeNode* root, int L, int R){
        if(!root) return NULL;
        if(root->val < L){
            root = trimBST(root->right, L, R);

        }else if(root->val > R){
            root = trimBST(root->left, L, R);
        }else{
            root->left = trimBST(root->left, L, R);
            root->left = trimBST(root->right, L, R);
        }
        
        return root;
    }
};
