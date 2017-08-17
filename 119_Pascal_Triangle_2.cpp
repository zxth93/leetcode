//
//  119_Pascal_Triangle_2.cpp
//  leetcode
//
//  Created by R Z on 2017/8/16.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex+1, 1);
        vector<int> temp(rowIndex+1, 1);
        
        
        for(int i = 0; i<rowIndex; i++){
            for(int j = 1; j <= i; j++){
                result[j] = temp[j] + temp[j-1];
            }
            for(int m=0; m<=rowIndex; m++){
                temp[m] = result[m];
            }
        }
        
        return result;
        
    }
    
};
