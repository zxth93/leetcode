//
//  RansomNote.h
//  leetcode
//
//  Created by R Z on 16/9/12.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef RansomNote_h
#define RansomNote_h
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int marr[26]={0};
        int rarr[26]={0};
        for(int i=0;i<magazine.size();i++){
            marr[magazine[i]-'a']+=1;
        }
        for(int i=0;i<ransomNote.size();i++){
            marr[ransomNote[i]-'a']-=1;
        }
        for(int i=0;i<26;i++){
            if(marr[i]<0){
                return false;
            }
        }
        return true;
    }
};

#endif /* RansomNote_h */
