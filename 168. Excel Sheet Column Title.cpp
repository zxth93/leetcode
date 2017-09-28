//
//  168. Excel Sheet Column Title.cpp
//  leetcode
//
//  Created by R Z on 2017/9/23.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string s="";
        if(n<27){
            s+=char(64+n);
            return s;
        }
        int x = n%26;
        n /= 26;
        if(x == 0){
            n--;
            x=26;
        }
        s = convertToTitle(n) + char(64+x);
        return s;
    }
};
