//
//  227.cpp
//  leetcode
//
//  Created by R Z on 2018/7/22.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <sstream>
#include <string>

using namespace std;
class Solution {
public:
    int calculate(string s) {
        istringstream is('+'+s+'+');
        int total=0, term=0, n;
        char op;
        while(is>>op){
            if(op=='+' || op=='-'){
                total+=term;
                is>>term;
                term*=44-op;
            }else{
                if(op=='*'){
                    is>>n;
                    term *=n;
                }else{
                    is>>n;
                    term /=n;
                }
            }
        }
        return total;
    }
};
