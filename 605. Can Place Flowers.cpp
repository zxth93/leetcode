//
//  605. Can Place Flowers.cpp
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
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                int next = (i==flowerbed.size()-1) ? 0 : flowerbed[i+1];
                int pre = (i==0) ? 0 : flowerbed[i-1];
                if(next == 0 && pre == 0){
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count>=n;
    }
};
