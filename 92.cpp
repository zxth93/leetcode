//
//  92.cpp
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head==NULL) return head;
        ListNode* fakeHead=new ListNode(0);
        fakeHead->next=head;
        ListNode* pre=fakeHead;
        for(int i=0;i<m-1;i++) pre=pre->next;
        ListNode* start=pre->next;
        ListNode* then=start->next;
        for(int i=0; i<n-m;i++){
            start->next=then->next;
            then->next=pre->next;
            pre->next=then;
            then=start->next;
        }
        return fakeHead->next;
    }
};
