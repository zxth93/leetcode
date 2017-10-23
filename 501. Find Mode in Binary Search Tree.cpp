//
//  501. Find Mode in Binary Search Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/9/28.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    vector<int> res;
public:
    vector<int> findMode(TreeNode* root) {
        int max, pre, cnt;
        getMax(root, max=0, pre, cnt=0);
        getMode(root, max, pre, cnt=0);
        return res;
    }
    
    void getMax(TreeNode* root, int &max, int &pre, int &cnt){
        if(!root) return;
        getMax(root->left, max, pre, cnt);
        getMax(root->right, max=cnt>max?cnt:max, pre=root->val, ++(cnt*=(pre==root->val)));
    }
    
    void getMode(TreeNode* root, int max, int &pre, int &cnt){
        if(!root) return;
        getMode(root->left, max, pre, cnt);
        if(++(cnt*=(root->val==pre)) == max) res.push_back(root->val);
        getMode(root->right, max, pre=root->val, cnt);
    }
    
};
