//
//  434. Number of Segments in a String.cpp
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
    int countSegments(string s) {
        if(s.size() < 1) return 0;
        int count =0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ' && (i==0 ||s[i-1] ==' ')){
                count++;
            }
            //if(s[i]=='\0' && count > 0) count++;
        }
        
        return count;
    }
};
