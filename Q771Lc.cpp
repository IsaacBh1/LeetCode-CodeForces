#include<string>
#include<bits/stdc++.h>
class Solution {
public:
    int numJewelsInStones(std::string jewels, std::string stones) {
        std::unordered_set<char> jewelsTypes; 
        int count = 0 ; 
        for (int i = 0; i < jewels.length(); i++)
            jewelsTypes.insert(jewels[i]);
        
         
        for (int i = 0; i < stones.size(); i++)
            if(jewelsTypes.find(stones[i]) != jewelsTypes.end()) 
                count++ ; 
            
        return count ;         

        
    }
};