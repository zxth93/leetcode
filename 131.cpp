//
//  131.cpp
//  leetcode
//
//  Created by R Z on 2018/8/19.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        if(s.size()==0) return res;
        vector<string> tmp;
        backtrace(res,tmp,s,0);
        return res;
    }
    
    void backtrace(vector<vector<string>> &res, vector<string> &tmp, string &s, int index){
        if(index==s.size()){
            res.push_back(tmp);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                tmp.push_back(s.substr(index,i-index+1));
                backtrace(res,tmp,s,i+1);
                tmp.pop_back();
            }
        }
    }
    
    bool isPalindrome(string &s, int start, int end){
        if(start>end) return false;
        while(start<end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
};
