#include<vector>
#include<bits/stdc++.h>

class Solution {
public:
    int majorityElement(std::vector<int>& nums){
        std::unordered_map<int,int> majority_map ;
        for (int i : nums)
            majority_map[i] ++ ; 
        
        int majority_elements = 0;
        int majority ; 
        for (auto i : majority_map)
        {
            if(i.second > majority_elements) {
                majority = i.first ; 
                majority_elements = i.second; 
            } 
        }
        
        return majority ; 
          
    }
};