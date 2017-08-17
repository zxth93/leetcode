//
//  PowerOfTwo.h
//  leetcode
//
//  Created by R Z on 16/9/29.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef PowerOfTwo_h
#define PowerOfTwo_h
using namespace std;
class Solution{
public:
    bool isPowerOfTwo(int n){
        if(n==1){
            return true;
        }
        if(n<=0){
            return false;
        }
        while(n%2==0){
            n>>=1;
            if(n==1){
                return true;
            }
        }
        return false;
    }
};

#endif /* PowerOfTwo_h */
