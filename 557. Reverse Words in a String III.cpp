//
//  557. Reverse Words in a String III.cpp
//  leetcode
//
//  Created by R Z on 2017/9/4.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int count = 0;
        stack<char> st;
        for(int i=0; i<=s.size(); i++){
            
            if(s[i] == ' ' || s[i] == '\0'){
                for(int j=count; j>0; j--){
                    s[i-j]=st.top();
                    st.pop();
                }
                count = 0;
            }else{
                count++;
                st.push(s[i]);
            }
            
        }
        return s;
    }
};
