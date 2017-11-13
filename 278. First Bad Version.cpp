//
//  278. First Bad Version.cpp
//  leetcode
//
//  Created by R Z on 2017/11/13.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int front = 1;
        int tail = n;
        while(true){
            int mid = (tail-front)/2 + front;
            bool res = isBadVersion(mid);
            if(res){
                if(!isBadVersion(mid-1)) return mid;
                tail = mid-1;
            }else{
                front = mid+1;
            }
        }
    }
};
