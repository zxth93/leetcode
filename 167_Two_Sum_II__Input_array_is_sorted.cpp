//
//  167_Two_Sum_II__Input_array_is_sorted.cpp
//  leetcode
//
//  Created by R Z on 2017/8/17.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int l = 0;
        int r = numbers.size()-1;
        while(l < r){
            int sum = numbers[l]+numbers[r];
            if(sum == target){
                result.push_back(l+1);
                result.push_back(r+1);
                break;
            }else if(sum > target){
                r--;
            }else if(sum < target){
                l++;
            }
        }
        
        return result;
    }
};
