#include<vector>
#include<iostream>

class Solution {
    public:
    int maxProfit(std::vector<int>& prices) {
        int max_profit  = 0 ; 
        int min_price = prices[0] ;


        for (int i = 0; i < prices.size(); i++)
        {
            if(min_price > prices[i]) {
                min_price = prices[i] ; 
                
            }
            if(prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;  
            }
        }
        return max_profit ; 
    }

} ; 




class Solution1 {
public:
    int maxProfit(std::vector<int>& prices) {
        int deference = 0 ; 
        for (int i = 0; i < prices.size(); i++)
        {
            for (int j = i+1; j < prices.size(); j++)
            {
                if(prices[j] - prices[i] > deference) {
                    deference = prices[j] - prices[i] ; 
                }
            }
            
        }
        
        return deference ; 
    }
};