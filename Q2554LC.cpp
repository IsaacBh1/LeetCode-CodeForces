#include<vector>
#include<iostream>
#include<set>
class Solution {
public:
    int maxCount(std::vector<int>& banned, int n, int maxSum) {
        int counter = 0 ;  
        std::set<int> BannedNumbers;
        for (int i : banned)
        {
            if (i <= n)
                BannedNumbers.insert(i);
        }
        int sum = 0 ; 
        for (int i = 1; i <= n; i++)
        {
            if(BannedNumbers.find(i) == BannedNumbers.end()){
               if(sum + i <= maxSum){
                    counter ++;
                    sum += i; 
                }
                else{
                    break;
                }
            }
        }

        return counter ; 


    }
};