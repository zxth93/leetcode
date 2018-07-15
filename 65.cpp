//
//  65.cpp
//  leetcode
//
//  Created by R Z on 2018/7/15.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

class Solution {
public:
    bool isNumber(string s) {
        int len = s.length();
        int i=0;
        for( ; s[i]==' '; i++){}
        if(s[i]=='+'||s[i]=='-') i++;
        int n_nm=0,n_pt=0;
        for( ; (s[i]>='0' && s[i]<='9')|| s[i]=='.'; i++){
            s[i]=='.'?n_pt++:n_nm++;
        }
        
        if(n_pt>1||n_nm<1) return false;
        
        if(s[i]=='e'){
            i++;
            if(s[i]=='+'||s[i]=='-') i++;
            int n_nm=0;
            for( ; s[i]>='0'&&s[i]<='9';i++) n_nm++;
            if(n_nm==0) return false;
        }
        
        for( ; s[i]==' '; i++){}
        
        return s[i]==0;
        
    }
};
