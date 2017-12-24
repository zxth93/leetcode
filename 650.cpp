//
//  650.cpp
//  leetcode
//
//  Created by R Z on 2017/12/24.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    int minSteps(int n) {
        if(n==1) return 0;
        for(int i=2; i<n; i++)
            if(n%i==0) return i+minSteps(n/i);
        return n;
    }
};
