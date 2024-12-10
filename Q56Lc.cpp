

    //[1 , 3] , [3 , 5] => [1 , 5] 
    //[1 , 3] , [2 , 5] => [1 , 5] 
    //[1 , 5] , [1 , 3] => [1 , 5] 
    //[1 , 5] , [3 , 5] => [1 , 5]
    //[1 , 5] , [2 , 3] => [1 , 5]
    //[1 , 5] , [1 , 5] => [1 , 5]

    //[0 , 2][1 , 4][3 , 5]0
    //i = 0 =>  [0 , 4] , [3 , 5] 
    //i = 1 => 
#include<algorithm>
#include <vector>
#include <cmath>
#include<iostream>
class Solution {
public:
    std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& intervals) {
        
        std::sort(intervals.begin() , intervals.end()) ; 
        for (int i = 0; i < intervals.size() - 1 ; i++) {
                std::cout << i << std::endl ; 
            if (intervals[i][1] >= intervals[i+1][0]) {
                intervals[i] =  {intervals[i][0], std::max(intervals[i][1], intervals[i+1][1])};
                intervals.erase(intervals.begin() + i+1);
                // std::swap(intervals[i+1], intervals.back());  
                // intervals.pop_back();  
                i-- ; 
            }
            
        }
        return intervals;
    }
};