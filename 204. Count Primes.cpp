//
//  204. Count Primes.cpp
//  leetcode
//
//  Created by R Z on 2017/9/23.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> check(n);
        //bool []check = new bool[n];
        int count = 0;
        for(int i=2; i<n; i++){
            if(check[i]==false){
                count++;
                for(int j=2;i*j<n;j++){
                    check[j*i]=true;
                }
            }
        }
        
        return count;
    }
};
