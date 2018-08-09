//
//  116.cpp
//  leetcode
//
//  Created by R Z on 2018/8/9.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
/**
 * Definition for binary tree with next pointer.*/
struct TreeLinkNode {
   int val;
   TreeLinkNode *left, *right, *next;
   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root==NULL) return;
        TreeLinkNode* pre=root;
        TreeLinkNode* cur=NULL;
        while(pre->left){
            cur=pre;
            while(cur){
                cur->left->next=cur->right;
                if(cur->next) cur->right->next=cur->next->left;
                cur=cur->next;
            }
            pre=pre->left;
        }
    }
};
