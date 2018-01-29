//
//  11.cpp
//  leetcode
//
//  Created by R Z on 2018/1/29.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        if(len<2) return 0;
        int lo=0, hi=len-1, container=0;
        while(lo<hi){
            if(height[lo]<height[hi]){
                if(height[lo]*(hi-lo)>container){
                    container=height[lo]*(hi-lo);
                }
                lo++;
            }
            else{
                if(height[hi]*(hi-lo)>container){
                    container=height[hi]*(hi-lo);
                }
                hi--;
            }
        }
        return container;
    }
};
