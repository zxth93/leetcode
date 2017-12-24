//
//  120.cpp
//  leetcode
//
//  Created by R Z on 2017/12/24.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> minArr(triangle.back());
        for(int layer=n-2; layer>=0; layer--){
            for(int i=0; i<=layer;i++){
                minArr[i]=min(minArr[i],minArr[i+1]) + triangle[layer][i];
            }
        }
        return minArr[0];
    }
};
