//
//  84.cpp
//  leetcode
//
//  Created by R Z on 2018/3/24.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res=0;
        vector<int> index;
        heights.push_back(0);
        for(int i=0; i<heights.size();i++){
            while(index.size()>0 && heights[index.back()]>=heights[i]){
                int h = heights[index.back()];
                index.pop_back();
                int idx = index.size()>0?index.back():-1;
                if(res<h*(i-idx-1)) res=h*(i-idx-1);
            }
            index.push_back(i);
        }
        return res;
    }
};
