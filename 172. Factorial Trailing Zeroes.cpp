//
//  172. Factorial Trailing Zeroes.cpp
//  leetcode
//
//  Created by R Z on 2017/9/23.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>



class Solution {
public:
    int trailingZeroes(int n) {
        long result = 0;
        long x = 5;
        while(x<=n){
            result += n/x;
            x *=5;
        }
        
        return result;
    }
};
