//
//  714.cpp
//  leetcode
//
//  Created by R Z on 2018/1/6.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        long t_ik0=0, t_ik1=INT_MIN;
        for(int price : prices){
            long t_ik0_old = t_ik0;
            t_ik0 = max(t_ik0, t_ik1+price-fee);
            t_ik1 = max(t_ik1, t_ik0_old-price);
        }
        return t_ik0;
    }
};
