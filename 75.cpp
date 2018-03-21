//
//  75.cpp
//  leetcode
//
//  Created by R Z on 2018/3/21.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int n : nums){
            hash[n]++;
        }
        int index=0;
        for(int i=0; i<3; i++){
            while(hash[i]--){
                nums[index++]=i;
            }
        }
    }
    void sortColors(int A[], int n) {
        int second=n-1, zero=0;
        for (int i=0; i<=second; i++) {
            while (A[i]==2 && i<second) swap(A[i], A[second--]);
            while (A[i]==0 && i>zero) swap(A[i], A[zero++]);
        }
    }
};
