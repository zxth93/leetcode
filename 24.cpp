//
//  24.cpp
//  leetcode
//
//  Created by R Z on 2018/2/6.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
/**
 * Definition for singly-linked list.*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* n=head->next;
        head->next=swapPairs(n->next);
        n->next=head;
        return n;
    }
};
