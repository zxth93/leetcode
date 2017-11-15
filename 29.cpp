//
//  29.cpp
//  leetcode
//
//  Created by R Z on 2017/11/15.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(!divisor || (dividend==INT_MIN && divisor==-1)){
            return INT_MAX;
        }
        int res=0;
        int sign = (dividend<0)^(divisor<0)?-1:1;
        long long divid=labs(dividend);
        long long divis=labs(divisor);
        while(divid>=divis){
            long long temp=divis, multi=1;
            while(divid>=(temp<<1)){
                multi<<=1;
                temp<<=1;
            }
            divid-=temp;
            res +=multi;
        }
        return sign==1?res:0-res;
    }
};
