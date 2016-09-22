//
//  IntersectionTwoArrII.h
//  leetcode
//
//  Created by R Z on 16/9/13.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef IntersectionTwoArrII_h
#define IntersectionTwoArrII_h
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>::iterator it1;
        vector<int>::iterator it2;
        vector<int> em;
        if(nums1.empty()||nums2.empty()){
             return em;
        }
        unordered_map<int,int> hash;
        for(it1=nums1.begin();it1!=nums1.end();it1++){
            hash[*it1]++;
        }
        for(it2=nums2.begin();it2!=nums2.end();it2++){
            if(hash[*it2]>0 && hash.count(*it2)){
                em.push_back(*it2);
                hash[*it2]--;
            }
        }
        return em;
        //vector<int> n1=distinct(nums1);
        //vector<int> n2=distinct(nums2);
        //sort(nums1.begin(),nums1.end());
        //sort(nums2.begin(),nums2.end());
        //int count=min(nums1.size(),nums2.size());
        //int result[count]={0};
        //int index=0;
        //for(it1=nums1.begin();it1!=nums1.end();it1++){
        //    for(it2=nums2.begin();it2!=nums2.end();it2++){
        //        if(*it1==*it2){
        //            result[index++]=*it1;
        //            it1++;
        //            it2++;
        //        }
        //        else{
        //            continue;
        //        }
        //    }
        //}
        //if(index==0){
        //    return em;
        //}
        ////sort(result,result+index);
        //vector<int> vec(result,result+index);
        //return vec;
    }
   // vector<int> distinct(vector<int> &a){
   //    if(a.size()==1){
   //        return a;
   //    }
   //    sort(a.begin(),a.end());
   //    vector<int>::iterator it=a.begin();
   //    while(it!=a.end()-1){
   //        if(*it==*(it+1)){
   //            a.erase(it);
   //            continue;
   //        }
   //        it++;
   //    }
   //    return a;
   // }
   // int min(int a, int b){
   //     if(a<=b){
   //         return a;
   //     }
   //     return b;
   // }


};

#endif /* IntersectionTwoArrII_h */
