//
//  ReverseList.h
//  leetcode
//
//  Created by R Z on 16/9/22.
//  Copyright © 2016年 R Z. All rights reserved.
//


#ifndef ReverseList_h
#define ReverseList_h
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode result(0);
        while(head){
            ListNode* nex=head->next;
            head->next=result.next;
            result.next=head;
            head=nex;
        }
        return result.next;
    }
};

#endif /* ReverseList_h */
