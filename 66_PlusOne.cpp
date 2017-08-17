//
//  66_PlusOne.cpp
//  leetcode
//
//  Created by R Z on 2017/8/14.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        if(digits.size() == 0){
            return digits;
        }
        
        int digit_end = digits.back();
        if(digit_end < 9){
            digit_end++;
            digits.pop_back();
            digits.push_back(digit_end);
            return digits;
        }
        
        int count = digits.size();
        
        bool flag = true;
        while(count>0){
            int temp_end = digits.at(count-1);
            if(flag){
                if(temp_end ==9){
                    digits.erase(digits.begin()+count-1);
                    digits.insert(digits.begin()+count-1, 0);
                }else{
                    digits.erase(digits.begin()+count-1);
                    digits.insert(digits.begin()+count-1, temp_end+1);
                    flag = false;
                    break;
                }
            }else{
                if(temp_end ==9){
                    digits.erase(digits.begin()+count-1);
                    digits.insert(digits.begin()+count-1, 0);
                    flag = true;
                }else{
                    digits.erase(digits.begin()+count-1);
                    digits.insert(digits.begin()+count-1, temp_end+1);
                }
            }
            count--;
        }
        if(flag){
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
        
    }
};
