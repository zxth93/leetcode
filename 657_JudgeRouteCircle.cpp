//
//  657_JudgeRouteCircle.cpp
//  leetcode
//
//  Created by R Z on 2017/8/15.
//  Copyright © 2017年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iosteam>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int position[] = {0, 0};
        int i = 0;
        while(moves[i]!='\0'){
            if(moves[i] == 'U'){
                position[0]++;
            }else if(moves[i] == 'D'){
                position[0]--;
            }else if(moves[i] == 'L'){
                position[1]--;
            }else if(moves[i] == 'R'){
                position[1]++;
            }
            i++;
        }
        
        if(position[0] == 0 && position[1] == 0){
            return true;
        }
        return false;
    }
};
