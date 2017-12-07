//
//  378.cpp
//  leetcode
//
//  Created by R Z on 2017/12/7.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int lo=matrix[0][0], hi=matrix[rows-1][cols-1]+1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            int count=0, j=cols-1;
            for(int i=0; i<rows; i++){
                while(j>=0 && matrix[i][j]>mid) j--;
                count+=(j+1);
            }
            if(count<k) lo=mid+1;
            else hi=mid;
        }
        return lo;
    }
};
