//
//  520. Detect Capital 520. Detect Capital 520. Detect Capital 520. Detect Capital.cpp
//  leetcode
//
//  Created by R Z on 2017/9/5.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(int i=0; i<word.size(); i++){
            if(word[i]<97) count++;
        }
        if(count==word.size() || count==0){
            return true;
        }else if(count==1){
            return word[0] < 97;
        }
        return false;
    }
};
