//
//  845.cpp
//  leetcode
//
//  Created by R Z on 2018/7/22.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    int longestMountain(vector<int>& A) {
        int len=A.size();
        int res=0;
        vector<int> up(len,0);
        vector<int> down(len,0);
        for(int i=len-2; i>=0;i--){
            if(A[i]>A[i+1]) down[i]=down[i+1]+1;
        }
        for(int i=0;i<len;i++){
            if(i>0 && A[i]>A[i-1]) up[i]=up[i-1]+1;
            if(up[i] && down[i]) res=max(res,up[i]+down[i]+1);
        }
        return res;
    }
};
