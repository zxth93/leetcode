//
//  RmDupList.h
//  leetcode
//
//  Created by R Z on 16/9/29.
//  Copyright © 2016年 R Z. All rights reserved.
//
/**
 * struct ListNode{
 *  int val;
 *  ListNode* next;
 *  ListNode(int x): val(x),next(null)
 *
 * }
*/
#ifndef RmDupList_h
#define RmDupList_h
class Solution{
    public:
        ListNode* deleteDuplicates(ListNode* head){
            if(head==NULL||head->next==NULL){
                return head;
            }
            ListNode* temp=head;
            while(temp->next!=NULL){
                if(temp->val==temp->next->val){
                    temp->next=temp->next->next;
                    //temp->next->next=NULL;
                    continue;
                }
                temp=temp->next;
            }
            return head;
        }
};

#endif /* RmDupList_h */
