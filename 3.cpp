//
//  3.cpp
//  leetcode
//
//  Created by R Z on 2018/1/21.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int maxLen = 0;
        for(int i=0, j=0; i<s.size(); i++){
            if(hash.find(s[i])!=hash.end()){
                j=max(j, hash[s[i]]+1);
            }
            hash[s[i]]=i;
            maxLen = max(maxLen, i-j+1);
        }
        return maxLen;
    }
};
