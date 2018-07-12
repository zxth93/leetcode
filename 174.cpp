//
//  174.cpp
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
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m = dungeon.size();
        int n = dungeon[0].size();
        vector<vector<int>> hp(m+1, vector<int>(n+1, INT_MAX));
        hp[m][n-1]=1;
        hp[m-1][n]=1;
        for(int i=m-1;i>=0; i--){
            for(int j=n-1;j>=0;j--){
                int need = min(hp[i+1][j],hp[i][j+1])-dungeon[i][j];
                hp[i][j]=need<=0?1:need;
            }
        }
        return hp[0][0];
    }
};
