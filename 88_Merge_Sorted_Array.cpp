//
//  88_Merge_Sorted_Array.cpp
//  leetcode
//
//  Created by R Z on 2017/8/24.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>

using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--];
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
};
