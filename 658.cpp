//
//  658.cpp
//  leetcode
//
//  Created by R Z on 2017/12/8.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int len=arr.size();
        int index = low_bound(arr, len, x);
        int i=index-1, j=index;
        while(k--){
            i<0||(j<len && abs(arr[i]-x)>abs(arr[j]-x))?j++:i--;
        }
        return vector<int>(arr.begin()+i+1,arr.begin()+j);
    }
    
    int low_bound(vector<int> &nums, int len, int target){
        if(!len) return 0;
        if(nums[0]>=target) return 0;
        else if(nums[len-1]<target) return len-1;
        int lo=0, hi=len-1;
        while(lo<hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target) lo=mid+1;
            else hi=mid;
        }
        return lo;
    }
};
