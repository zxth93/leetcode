//
//  188.cpp
//  leetcode
//
//  Created by R Z on 2018/7/12.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(k >= prices.size()>>1){
            int t_ik0=0, t_ik1=INT_MIN;
            for(int price : prices){
                int t_ik0_old=t_ik0;
                t_ik0=max(t_ik0,t_ik1+price);
                t_ik1=max(t_ik1,t_ik0-price);
            }
            return t_ik0;
        }
        vector<int> t_ik0(k+1,0);
        vector<int> t_ik1(k+1,INT_MIN);
        for(int price: prices){
            for(int j=k;j>0;j--){
                t_ik0[j]=max(t_ik0[j],t_ik1[j]+price);
                t_ik1[j]=max(t_ik1[j],t_ik0[j-1]-price);
            }
        }
        return t_ik0[k];
    }
};
