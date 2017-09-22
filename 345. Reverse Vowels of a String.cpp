//
//  345. Reverse Vowels of a String.cpp
//  leetcode
//
//  Created by R Z on 2017/9/7.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        stack<char> bag;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') bag.push(s[i]);
            
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=bag.top();
                bag.pop();
            }
            
        }
        return s;
    }
};
