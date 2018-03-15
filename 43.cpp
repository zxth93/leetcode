//
//  43.cpp
//  leetcode
//
//  Created by R Z on 2018/3/15.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        string sum(num1.length()+num2.length(),'0');
        for(int i=num1.length()-1;i>=0;i--){
            int carry=0;
            for(int j=num2.length()-1;j>=0;j--){
                int tmp=(sum[i+j+1]-'0')+(num1[i]-'0')*(num2[j]-'0')+carry;
                sum[i+j+1]=tmp%10 + '0';
                carry=tmp/10;
            }
            sum[i]+=carry;
        }
        size_t start = sum.find_first_not_of('0');
        if(string::npos != start) return sum.substr(start);
        return "0";
    }
};
