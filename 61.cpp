//
//  61.cpp
//  leetcode
//
//  Created by R Z on 2018/8/13.
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode* newH;
        ListNode* tail;
        newH=tail=head;
        int len=1;
        while(tail->next){
            tail=tail->next;
            len++;
        }
        tail->next=head;
        if(k%=len){
            for(auto i=0;i<len-k;i++) tail=tail->next;
        }
        newH=tail->next;
        tail->next=NULL;
        return newH;
    }
};
