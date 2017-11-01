//
//  653. Two Sum IV - Input is a BST.cpp
//  leetcode
//
//  Created by R Z on 2017/9/26.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
private:
    vector<int> res;
public:
    bool findTarget(TreeNode* root, int k) {
        travel(root);
        int i=0;
        int j=res.size()-1;
        while(i<j){
            int sum = res[i]+res[j];
            if(sum > k){
                j--;
            }else if(sum < k){
                i++;
            }else{
                return true;
            }
        }
        return false;
    }
    
    void travel(TreeNode* root){
        if(root == NULL) return;
        travel(root->left);
        res.push_back(root->val);
        travel(root->right);
        
    }
    
};
