//
//  257. Binary Tree Paths.cpp
//  leetcode
//
//  Created by R Z on 2017/9/27.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
    
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root) travel(root, "", res);
        return res;
    }
    
    void travel(TreeNode* root, string path, vector<string> &res){
        
        if(root->right == NULL && root->left == NULL) res.push_back(path+to_string(root->val));
        if(root->left) travel(root->left, path+to_string(root->val)+"->", res);
        if(root->right) travel(root->right,path+to_string(root->val)+"->", res);
        //return sl+sr;
    }
};
