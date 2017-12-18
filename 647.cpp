//
//  647.cpp
//  leetcode
//
//  Created by R Z on 2017/12/18.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
public:
    int countSubstrings(string s) {
        int res = 0, n = s.length();
        for(int i = 0; i < n; i++){
            for(int j = 0; i-j >= 0 && i+j < n && s[i-j] == s[i+j]; j++)res++; //substring s[i-j, ..., i+j]
            for(int j = 0; i-1-j >= 0 && i+j < n && s[i-1-j] == s[i+j]; j++)res++; //substring s[i-1-j, ..., i+j]
        }
        return res;
    }
};
