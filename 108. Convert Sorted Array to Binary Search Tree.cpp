//
//  108. Convert Sorted Array to Binary Search Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/10/31.
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        if(nums.size()==1) return new TreeNode(nums[0]);
        int mid = nums.size()/2;
        TreeNode* root = new TreeNode(nums[mid]);
        vector<int> l(nums.begin(), nums.begin()+mid);
        vector<int> r(nums.begin()+mid+1,nums.end());
        root->left = sortedArrayToBST(l);
        root->right= sortedArrayToBST(r);
        return root;
    }
};
