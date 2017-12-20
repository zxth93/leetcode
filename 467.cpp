//
//  467.cpp
//  leetcode
//
//  Created by R Z on 2017/12/20.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int findSubstringInWraproundString(string p) {
        vector<int> count(26);
        int maxLenCur=0;
        for(int i=0; i<p.size(); i++){
            if(i>0 && (p[i]-p[i-1]==1 || p[i-1]-p[i]==25)){
                maxLenCur++;
            }else{
                maxLenCur=1;
            }
            
            int index=p[i]-'a';
            count[index]=max(count[index],maxLenCur);
        }
        int sum=0;
        for(int n : count) sum+=n;
        return sum;
    }
};
