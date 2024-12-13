#include<vector>
class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        std::vector<int> wait_days ;
        int found_warmer_day = -1 ;  
        for (int i = 0; i < temperatures.size(); i++)
        {
            found_warmer_day = -1 ; 
            for (int j = i+1; j < temperatures.size(); j++)
            {
                if(temperatures[i] <= temperatures[j]) {
                    found_warmer_day = j ; 
                    break;
                } 
            }
            if(found_warmer_day == -1) wait_days.push_back(0) ; 
            else wait_days.push_back(found_warmer_day - i); 
            
        }
        return wait_days ;    
    }
};