//
//  NumberOf1.h
//  leetcode
//
//  Created by R Z on 16/10/6.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef NumberOf1_h
#define NumberOf1_h
using namespace std;
class Solution{
    public:
        int hammingWeight(uint32_t n){
            int count=0;
            while(n>0){
                if(n & 1){
                    count++;
                }
                n=n>>1;
            }
            return count;
        }
};

#endif /* NumberOf1_h */
