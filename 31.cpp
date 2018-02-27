//
//  31.cpp
//  leetcode
//
//  Created by R Z on 2018/2/27.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return;
        int index=n-1;
        while(index){
            if(nums[index]>nums[index-1]) break;
            index--;
        }
        if(index==0) reverseSort(nums, 0, n-1);
        else{
            int val = nums[index-1];
            int j=n-1;
            while(j>=index){
                if(nums[j]>val) break;
                j--;
            }
            swap(nums[index-1], nums[j]);
            reverseSort(nums, index, n-1);
        }
        
    }
    
    void reverseSort(vector<int>& nums, int start, int end){
        if(start>end) return;
        for(int i=start; i<=(start+end)/2; i++) swap(nums[i],nums[start-i+end]);
    }
};
