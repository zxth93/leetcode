//
//  233.cpp
//  leetcode
//
//  Created by R Z on 2018/7/25.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>

class Solution {
public:
    int countDigitOne(int n) {
        if(n==0) return 0;
        int count=0;
        for(long long i=1; i<=n; i*=10){
            int a=n/i,b=n%i;
            if(a%10>=2) count+=(a/10+1)*i;
            else if(a%10==1) count+=(a/10)*i+b+1;
            else count+=(a/10)*i;
        }
        return count;
    }
};
