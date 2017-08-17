//
//  ClimbingStairs.h
//  leetcode
//
//  Created by R Z on 16/10/6.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef ClimbingStairs_h
#define ClimbingStairs_h
class Solution{
    public:
        int data[100]={0};
        int climbStairs(int n){
            if(n==1 || n==0){
                return 1;
            }
            if(!containNum(n)){
                data[n-1]=climbStairs(n-1)+climbStairs(n-2);
            }
            return data[n-1];
        }

        bool containNum(int n){
            if(data[n-1]!=0){
                return true;
            }
            return false;
        }
}

#endif /* ClimbingStairs_h */
