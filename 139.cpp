//
//  139.cpp
//  leetcode
//
//  Created by R Z on 2018/1/4.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        if(wordDict.size()==0) return false;
        unordered_set<string> dict;
        for(string str : wordDict) dict.insert(str);
        vector<bool> dp(s.size()+1, false);
        dp[0]=true;
        for(int i=1; i<=s.size(); i++){
            for(int j=i-1; j>=0; j--){
                if(dp[j]){
                    string word = s.substr(j,i-j);
                    if(dict.find(word)!=dict.end()){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        return dp[s.size()];
    }
};
