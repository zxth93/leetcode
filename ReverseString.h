//
//  ReverseString.h
//  leetcode
//
//  Created by R Z on 16/9/7.
//  Copyright © 2016年 R Z. All rights reserved.
//

#ifndef ReverseString_h
#define ReverseString_h
class Solution {
public:
    std::string reverseString(std::string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            std::swap(s[i], s[j]);
        }
        
        return s;
    }
};

#endif /* ReverseString_h */
