//
//  105.cpp
//  leetcode
//
//  Created by R Z on 2018/3/28.
//  Copyright © 2018年 R Z. All rights reserved.
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()!=inorder.size()) return NULL;
        return treeHelper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
    
    TreeNode* treeHelper(vector<int>& pre,int startPre, int endPre, vector<int>& in, int startIn, int endIn){
        if(startPre>endPre || startIn>endIn) return NULL;
        TreeNode* root = new TreeNode(pre[startPre]);
        for(int i=startIn; i<=endIn; i++){
            if(pre[startPre]==in[i]){
                if(i>startIn) root->left=treeHelper(pre,startPre+1,startPre+i-startIn,in,startIn,i-1);
                if(i<endIn) root->right=treeHelper(pre,startPre+i-startIn+1,endPre,in,i+1,endIn);
            }
        }
        return root;
    }
};
