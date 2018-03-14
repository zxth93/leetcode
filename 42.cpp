//
//  42.cpp
//  leetcode
//
//  Created by R Z on 2018/3/14.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1;
        int lower=0, level=0;
        int water=0;
        while(l<r){
            lower = height[height[l]<height[r]?l++:r--];
            level=max(level,lower);
            water+=level-lower;
        }
        return water;
    }
};
