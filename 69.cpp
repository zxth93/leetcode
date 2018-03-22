//
//  69.cpp
//  leetcode
//
//  Created by R Z on 2018/3/22.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int lo=1,hi=INT_MAX;
        while(true){
            int mid = lo+(hi-lo)/2;
            if(mid>x/mid){
                hi=mid-1;
            }else{
                if(mid+1>x/(mid+1)) return mid;
                lo=mid+1;
            }
        }
    }
};
