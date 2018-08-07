//
//  103.cpp
//  leetcode
//
//  Created by R Z on 2018/8/7.
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        int l=1;
        s1.push(root);
        while(!s1.empty()||!s2.empty()){
            vector<int> tmp;
            if(l%2==1){
                while(!s1.empty()){
                    TreeNode* node=s1.top();
                    s1.pop();
                    tmp.push_back(node->val);
                    if(node->left) s2.push(node->left);
                    if(node->right) s2.push(node->right);
                }
            }
            else{
                while(!s2.empty()){
                    TreeNode* node=s2.top();
                    s2.pop();
                    tmp.push_back(node->val);
                    if(node->right) s1.push(node->right);
                    if(node->left) s1.push(node->left);
                }
            }
            l++;
            res.push_back(tmp);
        }
        return res;
    }
};
