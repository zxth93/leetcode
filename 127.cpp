//
//  127.cpp
//  leetcode
//
//  Created by R Z on 2018/8/17.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordDict;
        for(string s : wordList) wordDict.insert(s);
        if(wordDict.find(endWord)==wordDict.end()) return 0;
        unordered_set<string> head, tail, *phead, *ptail;
        head.insert(beginWord);
        tail.insert(endWord);
        int dist = 2;
        while (!head.empty() && !tail.empty()) {
            if (head.size() < tail.size()) {
                phead = &head;
                ptail = &tail;
            }
            else {
                phead = &tail;
                ptail = &head;
            }
            unordered_set<string> temp;
            for (auto itr = phead -> begin(); itr != phead -> end(); itr++) {
                string word = *itr;
                wordDict.erase(word);
                for (int p = 0; p < (int)word.length(); p++) {
                    char letter = word[p];
                    for (int k = 0; k < 26; k++) {
                        word[p] = 'a' + k;
                        if (ptail -> find(word) != ptail -> end())
                            return dist;
                        if (wordDict.find(word) != wordDict.end()) {
                            temp.insert(word);
                            wordDict.erase(word);
                        }
                    }
                    word[p] = letter;
                }
            }
            dist++;
            swap(*phead, temp);
        }
        return 0;
    }
};
