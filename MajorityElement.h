//
//  MajorityElement.h
//  leetcode
//
//  Created by R Z on 16/9/12.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef MajorityElement_h
#define MajorityElement_h
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       // int len=nums.size();
       // int result;
       // for(int i=0;i<len;i++){
       //     int tmp=nums[i];
       //     int count =0;
       //     for(int j=0;j<len;j++){
       //         if(tmp==nums[j]){
       //             count++;
       //         }
       //     }
       //     if(count>(len/2)){
       //         result=tmp;
       //         break;
       //     }
       // }
       // return result;
          sort(nums.begin(),nums.end());
          int len=nums.size();
          return nums[len/2];
    }
};

#endif /* MajorityElement_h */
