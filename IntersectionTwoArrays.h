//Given two arrays, write a function to compute their intersection.
//  IntersectionTwoArrays.h
//  leetcode
//
//  Created by R Z on 16/9/11.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef IntersectionTwoArrays_h
#define IntersectionTwoArrays_h

#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>::iterator it1;
        vector<int>::iterator it2;
        vector<int> em;
        if(nums1.empty()||nums2.empty()){
            return em;
        }
        vector<int> n1=distinct(nums1);
        vector<int> n2=distinct(nums2);
        int count=min(n1.size(),n2.size());
        int result[count]={0};
        int index=0;
        for(it1=n1.begin();it1!=n1.end();it1++){
            for(it2=n2.begin();it2!=n2.end();it2++){
                if(*it1==*it2){
                    result[index++]=*it1;
                }
                else{
                    continue;
                }
            }
        }
        if(index==0){
            return em;
        }
        //sort(result,result+index);
        vector<int> vec(result,result+index);
        return vec;
    }
    vector<int> distinct(vector<int> &a){
       if(a.size()==1){
           return a;
       }
       sort(a.begin(),a.end());
       vector<int>::iterator it=a.begin();
       while(it!=a.end()-1){
           if(*it==*(it+1)){
               a.erase(it);
               continue;
           }
           it++;
       }
       return a;
    }
    int min(int a, int b){
        if(a<=b){
            return a;
        }
        return b;
    }
};

#endif /* IntersectionTwoArrays_h */
