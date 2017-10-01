//
//  606. Construct String from Binary Tree.cpp
//  leetcode
//
//  Created by R Z on 2017/9/7.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    string tree2str(TreeNode* t) {
        string result = "";
        if(t == NULL){
            return "";
        }
        result += to_string(t->val);
        string left = tree2str(t->left);
        string right = tree2str(t->right);
        
        if(left==""&&right=="") return result;
        if(left=="") return result+"()"+"("+right+")";
        if(right=="") return result +"("+left+")";
        
        return result + "(" + left + ")" + "(" +right + ")";
    }
};
