//
//  FirstUniqueChar.h
//  leetcode
//
//  Created by R Z on 16/9/11.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef FirstUniqueChar_h
#define FirstUniqueChar_h
class Solution {
public:
    int firstUniqChar(std::string s) {
        if(s.empty()){
            return -1;
        }
        int result[26]={0};
        int len=(int)s.size();
        int arr[26]={0};
        for(int i=0;i<len;i++){
            int tmp=s[i]-'a';
            arr[tmp]+=1;
        }
        int index=0;
        for(int i=0;i<26;i++){
            if(arr[i]==1){
                result[index++]=i;
            }
        }
        if(index==0){
            return -1;
        }
        int rs=s.find(result[0]+'a');
        for(int i=1;i<index;i++){
            int tmp=s.find(result[i]+'a');
            if(tmp<rs){
                rs=tmp;
            }
        }
        return rs;
    }
};
#endif /* FirstUniqueChar_h */
