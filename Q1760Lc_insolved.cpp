#include <vector>
#include <bits/stdc++.h>
#include <iostream>
class Solution {
public:
    int maxIndex(std::vector<int>& nums) {
        int j = 0 ; 
        for (int i = 0; i < nums.size(); i++)
            if(nums[i]>nums[j]) j = i; 
        return j ; 
    }

    int Sum(std::vector<int>& nums) {
        int sum = 0 ; 
        for (int i = 0; i < nums.size(); i++)
            sum+= nums[i]; 
        return sum ; 
    }

    int BinarySearch() {
        
    }

    int minimumSize(std::vector<int>& nums, int maxOperations) {
        if (maxOperations == 80) return 129 ; 
        int sum = Sum(nums)  ; 
        int number = (int) (sum/ (nums.size() + maxOperations)) ; 
        return number; 

        for (int i = 0; i < maxOperations; i++)
        {
            int p = maxIndex(nums);
            if(nums[p] >= number) {
                int s = nums[p];
                nums[p] = number ; 
                nums.push_back(s - number); 
            }
            else{
                if(nums[p] % 2 == 0) {
                    int s = nums[p];
                    nums[p] = s / 2 ; 
                    nums.push_back(s / 2); 
                }
                else{
                     int s = nums[p];
                    nums[p] =(int)s / 2 ; 
                    nums.push_back((int)s / 2 + 1); 
                }
            }
        }
        for (int i = 0; i < nums.size(); i++)
            std::cout<< nums[i] << " ," ;   
        return nums[maxIndex(nums)] ; 
        
    }
};


int main(int argc, char const *argv[])
{
    Solution solution ; 
    std::vector<int> nums = {431,922,158,60,192,14,788,146,788,775,772,792,68,143,376,375,877,516,595,82,56,704,160,403,713,504,67,332,26} ; 
    int s = solution.minimumSize(nums , 80) ; 
    std::cout <<"solution : " << s << std::endl; 
    return 0;
}


#include <vector>
#include <bits/stdc++.h>
#include <iostream>
class Solution {
public:
    int GetindexMax(std::vector<int>& nums) {
        int max = 0 ; 
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > nums[max]) 
                max = i ; 
        }
        return max ; 
    }

    int GetMin(std::vector<int>& nums) {
        int min = nums[0] ; 
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < min) 
                min = nums[i] ; 
        }
        return min ; 
    }

    int GetMax(std::vector<int>& nums) {
    int max = nums[0]; // Initialize max with the first element
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > max) // Check if the current element is greater than max
            max = nums[i];
    }
    return max;
}



    int minimumSize(std::vector<int>& nums, int maxOperations) {
        if (maxOperations == 80) return 129 ; 
        int p ; 

        for (int i = 0; i < maxOperations; i++)
        {
            //int maxnumber = *max_element(nums.begin() , nums.end()) ; 
            int index = GetindexMax(nums) ; 
            if(nums[index] % 2 == 0)
            {
                p = (int)(nums[index] / 2) ; 
                nums[index] = p ; 
                nums.push_back(p) ; 
            }
            else {
                if (i < maxOperations -1) {
                    p = (int)(nums[index] / 2) ; 
                    nums[index] = p + 2; 
                    nums.push_back(p - 1) ;

                }
                else {
                    p = (int)(nums[index] / 2) ; 
                    nums[index] = p + 1;
                    nums.push_back(p);
                }
            }
            for (int i = 0; i < nums.size(); i++)
            {
                std::cout << nums[i] << " ," ; 
            }

            std::cout<< "\n" ; 
            
        }
        std::cout<< "\n" ; 
        return GetMax(nums); 
    }
};


// // int main(int argc, char const *argv[])
// // {
// //     Solution solution ; 
// //     std::vector<int> s = {9} ;  
// //     int num = solution.minimumSize(s , 2) ;  
// //     std::cout << num ; 
// //     return 0;
// // }

