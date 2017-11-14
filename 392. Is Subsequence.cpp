//
//  392. Is Subsequence.cpp
//  leetcode
//
//  Created by R Z on 2017/11/14.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using std:: string;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) return true;
        int indexT=0, indexS=0;
        while(indexT<t.size()){
            if(t[indexT]==s[indexS]){
                indexS++;
                if(indexS==s.size()) return true;
            }
            indexT++;
        }
        return false;
    }
};
