//medium 

#include<vector>
class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        
        std::vector<int> b1 = std::vector<int>(nums.size() , 1) ;
        b1[0] = 1 ; 
        std::vector<int> b2 = std::vector<int>( nums.size() , 1)  ;
        std::vector<int> out ; 

        for (int i = 1; i < nums.size(); i++)
        {
            b1[i] = nums[i-1] * b1[i-1] ;  
        }
        b2[nums.size()-1] = 1 ; 
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            b2[i] = nums[i+1] * b2[i+1] ; 
        }
        for (int i = 0; i < nums.size(); i++)
        {
            out.push_back(b1[i] * b2[i]) ; 
        }
        return out; 
        
    }
};