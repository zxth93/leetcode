//Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
//
//  SumTwoIntegers.h
//  leetcode
//
//  Created by R Z on 16/9/7.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef SumTwoIntegers_h
#define SumTwoIntegers_h
class Solution {
public:
    //add
    int getSum(int a, int b) {
        int unit = a^b;
        int dec = a&b;
        if(dec!=0){
            return getSum(dec<<1,unit);
        }
        else{
            return unit;
        }
    }
    //sub
    int getSub(int a,int b){
        return getSum(a,getSum(~b,1));
    }
    //multi
    int getMulti(int a,int b){
        int result=0;
        if(a==0 || b==0){
            return 0;
        }else{
            if(a!=1 && b!=1){
                //--b;
                //int result=0;
                //do{
                //    result+=getSum(a,a);
                //}while(--b);
                //return result;
                //
                while(--b){
                    return getMulti(a,b)+a;
                }
            }else{
                result= a==1?b:a;
            }
        }
        return result;
    }

};

#endif /* SumTwoIntegers_h */
