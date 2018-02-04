//
//  22.cpp
//  leetcode
//
//  Created by R Z on 2018/2/4.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
private:
    vector<string> res;
public:
    vector<string> generateParenthesis(int n) {
        if(n<1) return res;
        generate("",0,0,n);
        return res;
    }
    
    void generate(string str, int left, int right, int max){
        if(str.length()==2*max){
            res.push_back(str);
            return;
        }
        if(left<max) generate(str+"(",left+1,right,max);
        if(right<left) generate(str+")",left,right+1,max);
    }
};
