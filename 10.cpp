//
//  10.cpp
//  leetcode
//
//  Created by R Z on 2018/1/29.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        if(s[0]=='\0' && p[0]=='\0') return true;
        if(s[0]!='\0' && p[0]=='\0') return false;
        if(p[1]=='*'){
            if(s[0]==p[0] || (s[0]!='\0'&&p[0]=='.')){
                return isMatch(s.substr(1), p)||isMatch(s,p.substr(2));
            }else return isMatch(s,p.substr(2));
        }else{
            if(s[0]==p[0] || (s[0]!='\0' && p[0]=='.')){
                return isMatch(s.substr(1), p.substr(1));
            }else return false;
        }
        return false;
    }
};
