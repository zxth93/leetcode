//
//  637. Average of Levels in Binary Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/9/26.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> res;
        int l1=1;
        int l2=0;
        double n1=root->val;
        double n2=0;
        res.push_back(root->val*1.0);
        while(!q.empty()){
            TreeNode* beg = q.front();
            if(beg->left != NULL){
                l2++;
                n2+=beg->left->val;
                q.push(beg->left);
            }
            if(beg->right != NULL){
                l2++;
                n2+=beg->right->val;
                q.push(beg->right);
            }
            n1-= beg->val;
            q.pop();
            l1--;
            
            if(q.size()==l2 && q.size()!=0){
                res.push_back(n2/(l2*1.0));
                n1=n2;
                l1=l2;
                n2=0;
                l2=0;
            }
            
        }
        return res;
    }
    
    vector<double> averageOfLevels2(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            long temp=0;
            int s=q.size();
            for(int i=0;i<s;i++) {
                TreeNode* t=q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                temp+=t->val;
            }
            res.push_back((double)temp/s);
        }
        return res;
    }
};
