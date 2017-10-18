//
//  367. Valid Perfect Square.cpp
//  leetcode
//
//  Created by R Z on 2017/9/18.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>

class Solution {
public:
    bool isPerfectSquare(int num) {
        for(int i=1; num>0; i+=2){
            num -= i;
        }
        return num==0;
    }
    
    bool isPerfectSquare2(int num){
        int left = 1;
        int right = num;
        while(left<=right){
            int mid = left + (right - left)/2;
            int temp = mid*mid;
            if(temp < num){
                left=mid+1;
            }else if(temp > num){
                right = mid-1;
            }else{
                return true;
            }
        }
        return false;
    }
};
