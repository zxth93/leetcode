//
//  107. Binary Tree Level Order Traversal II.cpp
//  leetcode
//
//  Created by R Z on 2017/9/27.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        stack<vector<int>> tower;
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int s = q.size();
            for(int i=0; i<s; i++){
                TreeNode* t = q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                temp.push_back(t->val);
            }
            tower.push(temp);
        }
        while(!tower.empty()){
            res.push_back(tower.top());
            tower.pop();
        }
        return res;
    }
};
