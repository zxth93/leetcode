//
//  50.cpp
//  leetcode
//
//  Created by R Z on 2018/3/19.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0) {
            n = -n;
            x = 1/x;
        }
        double ans = 1;
        while(n>0){
            if(n&1) ans *= x;
            x *= x;
            n >>= 1;
        }
        return ans;
        
    }
};
