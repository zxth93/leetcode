//
//  67. Add Binary.cpp
//  leetcode
//
//  Created by R Z on 2017/9/13.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>

using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.size()-1;
        int blen = b.size()-1;
        int weight = 0;
        int anum = 0;
        int bnum = 0;
        string result = "";
        while(alen>=0||blen>=0||weight==1){
            anum=bnum=0;
            if(alen>=0) anum = a[alen--]=='1';
            if(blen>=0) bnum = b[blen--]=='1';
            result = static_cast<char>(anum^bnum^weight+'0')+result;
            //result.insert(result.begin(),temp+'0');
            weight = (anum+bnum+weight)/2;
        }
        return result;
    }
};
