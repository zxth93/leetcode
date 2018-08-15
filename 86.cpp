//
//  86.cpp
//  leetcode
//
//  Created by R Z on 2018/8/15.
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* node1=new ListNode(0);
        ListNode* node2=new ListNode(0);
        ListNode *p1=node1;
        ListNode *p2=node2;
        while(head){
            if(head->val<x){
                p1=p1->next=head;
            }else{
                p2=p2->next=head;
            }
            head=head->next;
        }
        p2->next=NULL;
        p1->next=node2->next;
        return node1->next;
    }
};
