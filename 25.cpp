//
//  25.cpp
//  leetcode
//
//  Created by R Z on 2018/2/27.
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur = head;
        int count = 0;
        while(cur!=NULL && count!=k){
            cur=cur->next;
            count++;
        }
        if(count==k){
            cur=reverseKGroup(cur,k);
            while(count--){
                ListNode* tmp = head->next;
                head->next=cur;
                cur=head;
                head=tmp;
            }
            head=cur;
        }
        return head;
    }
};
