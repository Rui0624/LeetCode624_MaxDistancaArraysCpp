//
//  main.cpp
//  LeetCode624_MaximumDistanceInArrays
//
//  Created by Rui on 1/10/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int res = 0;
        int start = arrays[0][0];
        int end = arrays[0].back();
        
        for(int i = 1; i < arrays.size(); i++)
        {
            res = max(res,max(end - arrays[i][0], arrays[i].back() - start)); // find the max distance, make sure no calculation in same array
            start = min(start, arrays[i][0]);
            end = max(end, arrays[i].back());
        }
       
        return res;
    }
    
    
};
