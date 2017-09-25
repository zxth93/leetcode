//
//  459. Repeated Substring Pattern.cpp
//  leetcode
//
//  Created by R Z on 2017/9/5.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size() < 2) return false;
        string temp = s+s;
        temp = temp.substr(1,temp.size()-2);
        return temp.find(s)!=-1;
    }
};
