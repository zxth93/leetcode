//
//  121. Best Time to Buy and Sell Stock.cpp
//  leetcode
//
//  Created by R Z on 2017/8/27.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2){
            return 0;
        }
        int result = 0;
        int min = 0;
        
        for(int i=0; i< prices.size()-1; i++){
            if(prices[i+1] > prices[i]){
                if(prices[i+1]-prices[min] > result){
                    result = prices[i+1]-prices[min];
                }
            }else{
                if(prices[i+1] < prices[min]){
                    min = i+1;
                }
            }
        }
        return result;
    }
};
