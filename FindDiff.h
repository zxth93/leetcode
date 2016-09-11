//
//  FindDiff.h
//  leetcode
//
//  Created by R Z on 16/9/8.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef FindDiff_h
#define FindDiff_h
class Solution{
    public:
        char findTheDifference(std::string s, std::string t){
            //char result;
            //for(int i=0;i<t.length();i++){
            //    if(s.find(t[i])==std::string::npos){
            //        result=t[i];
            //        break;
            //    }
            //}
            //return result;
            int as[26]={0};
            int ts[26]={0};
            for(int i=0;i<s.length();i++){
                int temp=s[i]-'a';
                //if(as[temp]==0){
                //    as[temp]=1;
                //}
                as[temp]++;
            }
            for(int i=0;i<t.length();i++){
                int temp=t[i]-'a';
                //if(ts[temp]==0){
                //   ts[temp]=1;
                //}
                ts[temp]++;
            }
            for(int i=0;i<26;i++){
                if((ts[i]-as[i])==1){
                    return 'a'+i;
                };
            }
            return ' ';

        }
};

#endif /* FindDiff_h */
