//
//  Palindrome Partitioning II.cpp
//  leetcode
//
//  Created by R Z on 16/10/13.
//  Copyright © 2016年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
class Solution{
    public:
        int minCut(string s){
            int len = s.length();
            if(len == 1 || isPalindrome(s)){
                return 0;
            }

            int *dp = (int*)malloc(sizeof(int)*len);
            string temp= "";
            temp+=s[0];
            dp[0] = 0;
            int result=0;
            for(int i=1;i<len-1;i++){
                temp+=s[i];
                if(isPalindrome(temp)){
                    //dp[i-1]--;
                    if(isPalindrome(temp+s[i+1])){
                        dp[i]=dp[i-1];
                    }else{
                        dp[i]=dp[i-1]+1;
                        temp="";

                    }
                }else{
                    dp[i]=0;

                }
            }
            if(isPalindrome(temp+s[len-1])){
               //dp[len-2]--;
                dp[len-1]=dp[len-2];
                result=dp[len-1];
            }else{
                result=dp[len-2]+1;
            }

            free(dp);
            return result;
        }

        bool isPalindrome(string s){
            int len = s.length();
            if(len == 1){
                return true;
            }
            bool flag = true;
            for(int i = 0;i < len/2;i++){
                if(s[i] != s[len-i-1]){
                    flag = false;
                    break;
                }
            }

            return flag;
        }
};
