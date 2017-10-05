//
//  263. Ugly Number.cpp
//  leetcode
//
//  Created by R Z on 2017/9/23.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>


class Solution {
public:
    bool isUgly(int num) {
        while(num > 1){
            if(num%2 == 0){
                num /= 2;
            }else if(num%3 == 0){
                num /= 3;
            }else if(num%5 == 0){
                num /= 5;
            }else{
                break;
            }
        }
        
        return num==1;
    }
};
