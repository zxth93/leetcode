//
//  49.cpp
//  leetcode
//
//  Created by R Z on 2018/3/19.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        if(strs.size()==NULL) return anagrams;
        unordered_map<string, multiset<string>> mp;
        for(string s : strs){
            string t = s;
            sort(t.begin(),t.end());
            mp[t].insert(s);
        }
        for(auto m : mp){
            vector<string> anagram(m.second.begin(),m.second.end());
            anagrams.push_back(anagram);
        }
        return anagrams;
    }
};
