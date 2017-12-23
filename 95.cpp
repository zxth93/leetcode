//
//  95.cpp
//  leetcode
//
//  Created by R Z on 2017/12/23.
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
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> res;
        if(n==0) return res;
        return generateTreesHelper(1,n);
    }
    vector<TreeNode*> generateTreesHelper(int start, int end){
        if(start>end) return vector<TreeNode*>{NULL};
        vector<TreeNode*> fina;
        for(int i=start; i<=end; i++){
            vector<TreeNode*> l = generateTreesHelper(start, i-1);
            vector<TreeNode*> r = generateTreesHelper(i+1, end);
            for(int j=0; j<l.size(); j++){
                for(int k=0; k<r.size(); k++){
                    TreeNode* root = new TreeNode(i);
                    root->left=l[j];
                    root->right=r[k];
                    fina.push_back(root);
                }
            }
        }
        return fina;
    }
};
