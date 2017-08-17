//
//  MergeInterval.cpp
//  leetcode
//
//  Created by R Z on 16/11/9.
//  Copyright © 2016年 R Z. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Interval{
    int start;
    int end;
    Interval() : start(),end(){}
    Interval(int s, int e) : start(s), end(e){}
};

class Solution{
    public:
        vector<Interval> merge(vector<Interval> &data){
            vector<Interval> ndata;
            if(data.size() > 1){
                for(int i = 0;i < data.size() - 1; i++){
                    for(int j = 0; j < data.size() - i - 1; j++){
                        if(data[j].start > data[j+1].start){
                            swap(data,j,j+1);
                        }
                    }
                    //cout<<data[data.size()-i-1].end<<endl;
                }
                //cout<<data[0].end<<endl;
                ndata.push_back(data[0]);
                for(int i = 1;i < data.size(); i++){
                    if(ndata.back().end >= data[i].start){
                        Interval temp = Interval(ndata.back().start, data[i].end);
                        ndata.pop_back();
                        ndata.push_back(temp);
                    }else{
                        ndata.push_back(data[i]);
                    }
                }

            }
            return ndata;
        }

        void swap(vector<Interval> &data, int i, int j){
            vector<Interval>::iterator ite = data.begin();
            Interval ii = data[i];
            Interval ij = data[j];
            data.erase(ite+i);
            data.insert(ite+i,ij);
            data.erase(ite+j);
            data.insert(ite+j,ii);
        }
};

int main(){
    Solution s;
    vector<Interval> data;
    data.push_back(Interval(15,18));
    data.push_back(Interval(8,10));
    data.push_back(Interval(2,6));
    data.push_back(Interval(1,3));
    vector<Interval> res = s.merge(data);
    for(int i=0;i<res.size();i++){
        cout<<res[i].start<<" "<<res[i].end<<",";
    }
    return 0;
}
