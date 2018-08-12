//
//  173.cpp
//  leetcode
//
//  Created by R Z on 2018/8/12.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <stack>
using namespace std;
/**
 * Definition for binary tree*/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class BSTIterator {
private:
    stack<TreeNode*> st;
public:
    BSTIterator(TreeNode *root) {
        pushAll(root);
    }
    
    void pushAll(TreeNode* node){
        for(;node!=NULL;st.push(node),node=node->left);
    }
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !st.empty();
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* tmp=st.top();
        st.pop();
        pushAll(tmp->right);
        return tmp->val;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
