//
//  572. Subtree of Another Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/11/2.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

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
    vector<TreeNode*> nodes;
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
        if(!t && !s){
            return true;
        }
        if(!t || !s){
            return false;
        }
        
        getDepth(s, getDepth(t, -1));
        for(TreeNode* n : nodes){
            if(identical(n, t)){
                return true;
            }
        }
        return false;
        
    }
    
    int getDepth(TreeNode* r, int d){
        if(!r) return 0;
        int depth = max(getDepth(r->left, d), getDepth(r->right, d)) + 1;
        if(depth == d) nodes.push_back(r);
        return depth;
    }
    
    bool identical(TreeNode* s, TreeNode* t){
        if(!s && !t) return true;
        if(!s || !t || s->val!=t->val) return false;
        return identical(s->left, t->left) && identical(s->right, t->right);
    }
};
