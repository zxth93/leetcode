//
//  4.cpp
//  leetcode
//
//  Created by R Z on 2018/1/28.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if(m>n) return findMedianSortedArrays(nums2,nums1);
        int lo=0,hi=m, mid=(m+n+1)/2;
        while(lo<=hi){
            int i = (lo+hi)/2;
            int j= mid-i;
            if(i<m && nums1[i]<nums2[j-1]) lo=i+1;
            else if(i>0 && nums1[i-1]>nums2[j]) hi=i-1;
            else{
                int maxLeft=INT_MIN;
                if(i==0) maxLeft=nums2[j-1];
                else if(j==0) maxLeft=nums1[i-1];
                else maxLeft=max(nums1[i-1],nums2[j-1]);
                if((n+m)%2==1) return maxLeft;
                int maxRight=INT_MAX;
                if(i==m) maxRight=nums2[j];
                else if(j==n) maxRight=nums1[i];
                else maxRight=min(nums1[i],nums2[j]);
                return (maxLeft+maxRight)/2.0;
            }
        }
        return 0;
    }
};
