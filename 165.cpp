//
//  165.cpp
//  leetcode
//
//  Created by R Z on 2018/7/19.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int l1=version1.size();
        int l2=version2.size();
        int i=0, j=0;
        int n1=0, n2=0;
        while(i<l1 || j<l2){
            while(version1[i]!='.' && i<l1){
                n1=n1*10+(version1[i]-'0');
                i++;
            }
            while(version2[j]!='.' && j<l2){
                n2=n2*10+(version2[j]-'0');
                j++;
            }
            if(n1>n2) return 1;
            else if(n1<n2) return -1;
            i++;
            j++;
            n1=0;
            n2=0;
            
        }
        return 0;
    }
};
