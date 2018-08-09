//
//  117.cpp
//  leetcode
//
//  Created by R Z on 2018/8/9.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
/**
Definition for binary tree with next pointer.*/
  struct TreeLinkNode {
   int val;
   TreeLinkNode *left, *right, *next;
   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};
class Solution {
public:
    void connect(TreeLinkNode *root) {
        TreeLinkNode* head = NULL; //head of the next level
        TreeLinkNode* prev = NULL; //the leading node on the next level
        TreeLinkNode* cur = root;  //current node of current level
        
        while (cur != NULL) {
            
            while (cur != NULL) { //iterate on the current level
                //left child
                if (cur->left != NULL) {
                    if (prev != NULL) {
                        prev->next = cur->left;
                    } else {
                        head = cur->left;
                    }
                    prev = cur->left;
                }
                //right child
                if (cur->right != NULL) {
                    if (prev != NULL) {
                        prev->next = cur->right;
                    } else {
                        head = cur->right;
                    }
                    prev = cur->right;
                }
                //move to next node
                cur = cur->next;
            }
            
            //move to next level
            cur = head;
            head = NULL;
            prev = NULL;
        }
    }
};
