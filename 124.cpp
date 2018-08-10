//
//  124.cpp
//  leetcode
//
//  Created by R Z on 2018/8/10.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <algorithm>
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
private:
    int maxVal;
public:
    int maxPathSum(TreeNode* root) {
        maxVal=INT_MIN;
        maxPathSumDown(root);
        return maxVal;
    }
    
    int maxPathSumDown(TreeNode* node){
        if(node==NULL) return 0;
        int left=max(0,maxPathSumDown(node->left));
        int right=max(0,maxPathSumDown(node->right));
        maxVal=max(maxVal,left+right+node->val);
        return max(left,right)+node->val;
    }
};
