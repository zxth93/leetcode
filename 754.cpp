//
//  754.cpp
//  leetcode
//
//  Created by R Z on 2018/7/22.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

class Solution {
public:
    int reachNumber(int target) {
        double N = abs(target);
        double x = (-1 + sqrt(1 + 8 * N)) / 2;
        if (x == (int)x) return (int)x;
        int b = (int)x + 1;
        while (true) {
            int c = (1 + b) * b / 2 - N;
            if ((c & 1) == 0) break;
            b++;
        }
        return b;
    }
};
