//
//  122. Best Time to Buy and Sell Stock II.cpp
//  leetcode
//
//  Created by R Z on 2017/8/29.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
        int result = 0;
        for(int i=0; i<prices.size()-1; i++){
            if(prices[i+1] > prices[i]){
                result += prices[i+1]-prices[i];
            }
        }
        
        return result;
    }
};
