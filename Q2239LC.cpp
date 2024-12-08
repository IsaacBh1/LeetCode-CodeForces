#include<vector>
//#include<cmath>
class Solution {


public:

    int abs(int num) {
        if(num < 0) num = -1 * num ;
        return num ;  
    }

    int findClosestNumber(std::vector<int>& nums) {
        int index = 0 ; 
        for (int i = 0 ; i < nums.size() ; i++  )
        {
            if(abs(nums[i]) < abs(nums[index]) ) {
                
                index = i ; 
            }
            else if(abs(nums[i]) == abs(nums[index])) {
                if(nums[i] > nums[index]) {
                    index = i ; 
                }
            }
        }
        return nums[index] ; 
    }
};