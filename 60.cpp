//
//  60.cpp
//  leetcode
//
//  Created by R Z on 2018/7/22.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
    
public:
    string getPermutation(int n, int k) {
        int i,j, f=1;
        string s(n,'0');
        for(i=1; i<=n; i++){
            f*=i;
            s[i-1]+=i;
        }
        for(i=0,k--;i<n && k>0; i++){
            f/=n-i;
            j=i+k/f;
            char c=s[j];
            for(;j>i;j--){
                s[j]=s[j-1];
            }
            s[i]=c;
            k%=f;
        }
        return s;
    }
    
    
};
