//
//  44.cpp
//  leetcode
//
//  Created by R Z on 2018/3/17.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
bool isMatch(char* s, char* p) {
    char* star=NULL;
    char* ss=s;
    while(*s){
        if(*s==*p || *p=='?'){s++;p++;continue;}
        if(*p=='*'){star=p++;ss=s;continue;}
        if(star){p=star+1;s=++ss;continue;}
        return false;
    }
    while(*p=='*') p++;
    return !*p;
}
