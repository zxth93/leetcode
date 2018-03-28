//
//  106.cpp
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        //if(inorder.size()！=postorder.size()) return NULL;
        return treeHelper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
    
    TreeNode* treeHelper(vector<int> &in, int startIn, int endIn, vector<int> &post, int startPost, int endPost){
        if(startIn>endIn ||startPost>endPost) return NULL;
        if(startIn==endIn && startPost== endPost) return new TreeNode(in[startIn]);
        TreeNode* root = new TreeNode(post[endPost]);
        for(int i=startIn;i<=endIn; i++){
            if(post[endPost]==in[i]){
                root->left=treeHelper(in,startIn,i-1,post,startPost,startPost+i-startIn-1);
                root->right=treeHelper(in,i+1,endIn,post,startPost+i-startIn,endPost-1);
            }
        }
        return root;
    }
};
