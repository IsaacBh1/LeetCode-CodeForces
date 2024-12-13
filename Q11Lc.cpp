#include<vector>
#include<algorithm>
#include<cmath>
#include<iostream>
class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0 , right = height.size() - 1 , area = 0 ; 
        while (left<=right) 
        {
            if((right - left) * std::min(height[right] , height[left]) > area) {
                area = (right - left) * std::min(height[right] , height[left]) ;  
            }
            if(height[left]>height[right]) right -- ; 
            else left ++ ; 
        }
        return area;
    }
};