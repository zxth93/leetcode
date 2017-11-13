//
//  374. Guess Number Higher or Lower.cpp
//  leetcode
//
//  Created by R Z on 2017/11/13.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int maxNum = n;
        int minNum = 1;
        while(true){
            int mid = (maxNum-minNum)/2 + minNum;
            int res = guess(mid);
            if(res==1){
                minNum = mid+1;
            }else if(res ==-1){
                maxNum = mid-1;
            }else{
                return mid;
            }
        }
    }
};
