//
//  17.cpp
//  leetcode
//
//  Created by R Z on 2018/1/31.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        int len = digits.size();
        if(!len) return res;
        res.push_back("");
        string charMap[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for(int i=0; i<len; i++){
            vector<string> tmp;
            string chars=charMap[digits[i]-'0'];
            for(int c=0; c<chars.length(); c++){
                for(int j=0; j<res.size(); j++){
                    tmp.push_back(res[j]+chars[c]);
                }
            }
            res=tmp;
        }
        return res;
    }
};
