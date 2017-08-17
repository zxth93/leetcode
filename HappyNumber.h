//
//  HappyNumber.h
//  leetcode
//
//  Created by R Z on 16/9/29.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef HappyNumber_h
#define HappyNumber_h
#include <cmath>
#define int data[10000];
#define index 0;

using namespace std;

class Solution {
public:
    //int data[10000];
    //int index=0;
    //bool isHappy(int n) {
    //    bool flag=false;
    //        int test=0;
    //        while(n>=10){
    //            int m=n%10;
    //            int tmp=pow(m,2);
    //            if(conNum(data,tmp,index)){
    //                return false;
    //            }
    //            data[index++]=tmp;
    //            test+=tmp;
    //            n=n/10;
    //        }
    //        int tmp=pow(n,2);
    //        if(conNum(data,tmp,index)){
    //            return false;
    //        }
    //        data[index++]=tmp;
    //        test+=tmp;
    //        if(test==1){
    //            flag=true;
    //        }else{
    //            flag=isHappy(test);
    //        }
    //        return flag;
    //    }

    //    bool conNum(int a[],int n,int len){
    //        for(int i=0;i<len;i++){
    //            if(a[i]==n){
    //                return true;
    //            }
    //        }
    //        return false;
    //    }
    int index=0;
    bool isHappy(int n){
        bool flag=false;
        int test=0;
        while(n>=10){
            int m=n%10;
            test+=pow(m,2);
            if((++index)>17){
                return false;
            }
            n=n/10;
        }
        test+=pow(n,2);
        if(test==1){
            flag=true;
        }else{
            return isHappy(test);
        }
        return flag;
    }

};
#endif /* HappyNumber_h */
