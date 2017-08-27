//
//  118_Pascal's_Triangle.cpp
//  leetcode
//
//  Created by R Z on 2017/8/25.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows);
        for(int i=0; i < numRows; i++){
            result[i].resize(i+1);
            for(int j=0; j<=i; j++){
                if(j==i || j==0){
                    result[i][j] = 1;
                }else{
                    result[i][j] = result[i-1][j] + result[i-1][j-1];
                }
            }
        }
        return result;
    }
};
