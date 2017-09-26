//
//  521. Longest Uncommon Subsequence I.cpp
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
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        return a.size()>b.size()?a.size():b.size();
    }
};
