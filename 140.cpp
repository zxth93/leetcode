//
//  140.cpp
//  leetcode
//
//  Created by R Z on 2018/5/14.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> res;
        if(s==""||wordDict.size()==0) return res;
        vector<bool> dp(s.length()+1, false);
        dp[0]=true;
        unordered_set<string> st;
        for(string str: wordDict) st.insert(str);
        for(int i=1; i<s.length(); i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j]){
                    if(st.find(s.substr(j,i-j))!=st.end()){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
        if(!dp[s.length()]) return res;
        string tmp="";
        backtrack(s,st,res,tmp,0);
        return res;
    }
    
    void backtrack(string s, unordered_set<string> &st, vector<string> &res, string tmps,int start){
        if(s.length()==start){
            res.push_back(tmps);
            return;
        }
        else{
            for(int i=start+1;i<=s.length();i++){
                string word=s.substr(start,i-start);
                if(st.find(word)!=st.end()){
                    string stmp=tmps;
                    if(start==0) tmps=word;
                    else tmps=tmps+" "+word;
                    backtrack(s,st,res,tmps,i);
                    tmps=stmp;
                }
            }
        }
    }
};
