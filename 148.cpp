//
//  148.cpp
//  leetcode
//
//  Created by R Z on 2018/3/29.
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
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* pre=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=NULL;
        ListNode* l=sortList(head);
        ListNode* r=sortList(slow);
        return merge(l,r);
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* n = new ListNode(0);
        ListNode* p=n;
        while(l1!=NULL && l2!=NULL){
            if(l1->val < l2->val){
                p->next=l1;
                l1=l1->next;
            }else{
                p->next=l2;
                l2=l2->next;
            }
            p=p->next;
        }
        if(l1!=NULL) p->next=l1;
        if(l2!=NULL) p->next=l2;
        return n->next;
    }
};
