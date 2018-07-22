//
//  149.cpp
//  leetcode
//
//  Created by R Z on 2018/7/22.
//  Copyright © 2018年 R Z. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;
/**
 * Definition for a point.
 */
struct Point {
      int x;
      int y;
      Point() : x(0), y(0) {}
      Point(int a, int b) : x(a), y(b) {}
};
class Solution {
public:
    int maxPoints(vector<Point>& points) {
        int result = 0;
        for(int i = 0; i < points.size(); i++){
            int samePoint = 1;
            unordered_map<double, int> map;
            for(int j = i + 1; j < points.size(); j++){
                if(points[i].x == points[j].x && points[i].y == points[j].y){
                    samePoint++;
                }
                else if(points[i].x == points[j].x){
                    map[INT_MAX]++;
                }
                else{
                    double slope = double(points[i].y - points[j].y) / double(points[i].x - points[j].x);
                    map[slope]++;
                }
            }
            int localMax = 0;
            for(auto it = map.begin(); it != map.end(); it++){
                localMax = max(localMax, it->second);
            }
            localMax += samePoint;
            result = max(result, localMax);
        }
        return result;
    }
};
