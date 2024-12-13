#include<vector>
#include<algorithm>
class Solution {
public:
     std::vector<int> sortedSquares(std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] *=nums[i] ;  
        }
        
        std::sort(nums.begin() , nums.end()) ; 
        return nums; 
     }


    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int i = 0 , j= nums.size() - 1 ; 
        int ptr = nums.size() - 1 ; 
        std::vector<int> arr(nums.size()) ; 
        while (i<=j)
        {
            if(nums[i]*nums[i] > nums[j]*nums[j]){
                arr[ptr] =  nums[i]*nums[i] ; 
                i++ ; 
            }
            else {
                arr[ptr] =  nums[j]*nums[j] ; 
                j-- ; 
            }
            ptr -- ; 
        }
        return arr ;                  
    }


};