//
//  151.cpp
//  leetcode
//
//  Created by R Z on 2018/7/19.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
public:
    void reverseWords(string &s) {
        reverse(s.begin(), s.end());
        int storeIndex = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                if (storeIndex != 0) s[storeIndex++] = ' ';
                int j = i;
                while (j < s.size() && s[j] != ' ') { s[storeIndex++] = s[j++]; }
                reverse(s.begin() + storeIndex - (j - i), s.begin() + storeIndex);
                i = j;
            }
        }
        s.erase(s.begin() + storeIndex, s.end());
    }
    
    void reverseString(string &s ,int l, int r){
        while(l<r){
            char c=s[l];
            s[l++]=s[r];
            s[r--]=c;
        }
    }
};
