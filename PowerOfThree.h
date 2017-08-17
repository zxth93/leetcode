//
//  PowerOfThree.h
//  leetcode
//
//  Created by R Z on 16/9/29.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef PowerOfThree_h
#define PowerOfThree_h
#include <string>
using namespace std;
class Solution{
    public:
        bool isPowerOfThree(int n){
            if(n==1){
                return true;
            }
            if(n<0){
                return false;
            }
            while(n != 0){
                if(n%3==0){
                    n=n/3;
                    if(n==1){
                        return true;
                    }
                }else{
                    break;
                }
            }
            return false;
        }
};

#endif /* PowerOfThree_h */
