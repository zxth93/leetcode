//
//  541. Reverse String II.cpp
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
    string reverseStr(string s, int k) {
        int count = 0;
        stack<char> st;
        
        for(int i=0; i<s.size(); i++){
            
            if(count == k){
                for(int j=k; j>0; j--){
                    s[i-j] = st.top();
                    st.pop();
                }
                //flag = false;
                i += k-1;
                count = 0;
            }else{
                st.push(s[i]);
                count++;
            }
            
        }
        if(count != 0){
            for(int j=count; j>0; j--){
                s[s.size()-j] = st.top();
                st.pop();
            }
        }
        return s;
    }
};
