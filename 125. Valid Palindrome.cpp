//
//  125. Valid Palindrome.cpp
//  leetcode
//
//  Created by R Z on 2017/9/13.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> bag;
        string str = "";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                str += char(s[i]+32);
                bag.push(s[i]+32);
            }else if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                str += s[i];
                bag.push(s[i]);
            }
        }
        int len = bag.size();
        //if(len==1 && s.size()>1) return false;
        int count = 0;
        for(int i=0;i<len;i++){
            if(str[i] != bag.top()) break;
            count++;
            bag.pop();
        }
        return count==len;
    }
};
