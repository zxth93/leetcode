//
//  2.cpp
//  leetcode
//
//  Created by R Z on 2018/1/21.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* c1 = l1;
        ListNode* c2 = l2;
        ListNode* res = new ListNode(0);
        ListNode* node = res;
        int sum = 0;
        while(c1!=NULL || c2!=NULL){
            sum/=10;
            if(c1!=NULL){
                sum+=c1->val;
                c1=c1->next;
            }
            if(c2!=NULL){
                sum+=c2->val;
                c2=c2->next;
            }
            node->next = new ListNode(sum%10);
            node = node->next;
        }
        if(sum/10==1) node->next = new ListNode(1);
        return res->next;
    }
};
