//
//  71.cpp
//  leetcode
//
//  Created by R Z on 2018/7/15.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        string res, tmp;
        vector<string> stk;
        stringstream ss(path);
        while(getline(ss,tmp,'/')){
            if(tmp==""||tmp==".") continue;
            if(tmp==".."&&!stk.empty()) stk.pop_back();
            else if(tmp!="..") stk.push_back(tmp);
        }
        for(string s: stk) res+="/"+s;
        return stk.empty()?"/":res;
    }
};
