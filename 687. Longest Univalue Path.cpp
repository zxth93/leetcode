//
//  687. Longest Univalue Path.cpp
//  leetcode
//
//  Created by R Z on 2017/10/15.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};
class Solution{
public:
    int longestUnivaluePath(TreeNode* root){
        int lup;
        if(root) dfs(root, lup);
        return lup;
    }
    
private:
    int dfs(TreeNode* node, int &lup){
        int l = node->left ? dfs(node->left, lup) : 0;
        int r = node->right ? dfs(node->right, lup) : 0;
        int resl = node->left && node->left->val == node->val ? l+1 : 0;
        int resr = node->right && node->right->val == node->val ? r+1 : 0;
        lup = max(lup, resl+resr);
        return max(resl, resr);
    }
};
