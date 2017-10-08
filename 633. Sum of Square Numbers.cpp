//
//  633. Sum of Square Numbers.cpp
//  leetcode
//
//  Created by R Z on 2017/9/18.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c < 0) return false;
        int l=0;
        int r=(int)sqrt(c);
        while(l<=r){
            int temp = l*l + r*r;
            if(temp<c){
                l++;
            }else if(temp > c){
                r--;
            }else{
                return true;
            }
        }
        return false;
    }
};
