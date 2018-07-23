//
//  166.cpp
//  leetcode
//
//  Created by R Z on 2018/7/23.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string fractionToDecimal(int64_t n, int64_t d) {
        if(n==0) return "0";
        string res="";
        if(n<0 ^ d<0) res+="-";
        n=abs(n), d=abs(d);
        if(n/d>0) res+=to_string(n/d);
        else res+="0";
        if(n%d==0) return res;
        else res+=".";
        
        unordered_map<int,int> map;
        for(int64_t r=n%d; r; r%=d){
            if(map.count(r)>0){
                res.insert(map[r],1,'(');
                res+=")";
                break;
            }
            map[r]=res.size();
            r*=10;
            res+=to_string(r/d);
        }
        return res;
    }
};
