//
//  551. Student Attendance Record I.cpp
//  leetcode
//
//  Created by R Z on 2017/9/4.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;


class Solution {
public:
    bool checkRecord(string s) {
        if(s.size() < 1){
            return false;
        }
        
        int a = 0;
        int l = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A'){
                a++;
            }
            if(s[i] == 'L'){
                l++;
            }else{
                l=0;
            }
            if(a > 1 || l >2){
                return false;
            }
        }
        
        return true;
    }
};
