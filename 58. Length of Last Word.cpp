//
//  58. Length of Last Word.cpp
//  leetcode
//
//  Created by R Z on 2017/9/7.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;


class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                count++;
            }else{
                if(s[i+1]=='\0'){
                    break;
                }else if(s[i+1]!=' '){
                    count=0;
                }
            }
            
        }
        return count;
    }
};
