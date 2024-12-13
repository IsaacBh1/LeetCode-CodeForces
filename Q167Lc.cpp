    #include<vector>
    class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& numbers, int target) {
            int left = 0 ;
            int right = numbers.size() - 1 ;
            while (left != right)
            {
                if(numbers[left] + numbers[right] == target) return {left + 1  , right + 1} ; 
                else if(numbers[left] + numbers[right] > target) right -- ; 
                else left ++ ; 
                
            }

            return std::vector<int>() ; 
            
        }
    };