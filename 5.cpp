//
//  5.cpp
//  leetcode
//
//  Created by R Z on 2018/1/29.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
private:
    int start=0, maxLen=0;
public:
    string longestPalindrome(string s) {
        int len = s.length();
        if(len<2) return s;
        for(int i=0; i<len-1; i++){
            extendPalindrome(s, i, i);
            extendPalindrome(s, i, i+1);
        }
        return s.substr(start, maxLen);
    }
    void extendPalindrome(string s, int j, int k){
        while(j>=0 && k<s.length() && s[j]==s[k]){
            j--;
            k++;
        }
        if(maxLen<k-j-1){
            maxLen=k-j-1;
            start=j+1;
        }
    }
};
