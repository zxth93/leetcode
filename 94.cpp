//
//  94.cpp
//  leetcode
//
//  Created by R Z on 2018/7/27.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <stack>
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> sta;
        if(root==NULL) return res;
        TreeNode* curr=root;
        while(!sta.empty()||curr){
            if(curr){
                sta.push(curr);
                curr=curr->left;
            }else{
                TreeNode* node=sta.top();
                sta.pop();
                res.push_back(node->val);
                curr=node->right;
            }
        }
        return res;
    }
};
