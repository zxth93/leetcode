//
//  224.cpp
//  leetcode
//
//  Created by R Z on 2018/7/23.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    int calculate(string s) {
        stack<int> nums, ops;
        int num=0;
        int res=0;
        int flag=1;
        for(char c : s){
            if(isdigit(c)){
                num=num*10+c-'0';
            }else{
                res+=flag*num;
                num=0;
                if(c=='+') flag=1;
                if(c=='-') flag=-1;
                if(c=='('){
                    nums.push(res);
                    ops.push(flag);
                    res=0;
                    flag=1;
                }
                if(c==')' && ops.size()){
                    res=res*ops.top()+nums.top();
                    nums.pop(),ops.pop();
                }
            }
        }
        res+=num*flag;
        return res;
    }
};
