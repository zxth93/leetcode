//
//  32.cpp
//  leetcode
//
//  Created by R Z on 2018/3/5.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        int len = s.length(), res = 0;
        stack<int> st;
        for(int i=0; i<len; i++){
            if(s[i]=='(') st.push(i);
            else{
                if(!st.empty() && s[st.top()]=='(') st.pop();
                else st.push(i);
            }
        }
        if(st.empty()) return len;
        int a=len, b=0;
        while(!st.empty()){
            b=st.top();
            st.pop();
            res = max(res, a-b-1);
            a=b;
        }
        res = max(res,a);
        return res;
    }
    
    int longestValidParentheses2(string s) {
        int len = s.length(), res=0;
        vector<int> dp(len, 0);
        for(int i=1;i<len;i++){
            if(s[i]==')' && i-dp[i-1]-1>=0 && s[i-dp[i-1]-1]=='('){
                dp[i]=dp[i-1] + 2 + ((i-dp[i-1]-2>=0)?dp[i-dp[i-1]-2]:0);
                res = max(dp[i],res);
            }
        }
        return res;
    }
};
