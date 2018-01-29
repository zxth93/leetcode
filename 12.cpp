//
//  12.cpp
//  leetcode
//
//  Created by R Z on 2018/1/29.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string romanPieces[]={"","I","II","III","IV","V","VI","VII","VIII","IX",
            "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC",
            "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM",
            "","M","MM","MMM","MMMM"};
        return romanPieces[num/1000+30]+romanPieces[(num/100)+20]
        +romanPieces[(num/10)+10]+romanPieces[num];
    }
};
