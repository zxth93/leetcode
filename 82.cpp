//
//  82.cpp
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* fakeHead = new ListNode(0);
        fakeHead->next=head;
        ListNode* pre=fakeHead;
        ListNode* cur=head;
        while(cur!=NULL){
            while(cur->next!=NULL && cur->val==cur->next->val){
                cur=cur->next;
            }
            if(pre->next==cur){
                pre=pre->next;
            }else{
                pre->next=cur->next;
            }
            cur=cur->next;
        }
        return fakeHead->next;
    }
};
