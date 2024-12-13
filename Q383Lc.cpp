#include<vector>
#include<string>
#include<map>
#include<bits/stdc++.h>
class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::map<char , int> letter_map ; 
        for (char i : magazine )
        {
            if(letter_map.find(i) == letter_map.end()) letter_map[i] = 1 ; 
            else letter_map[i] ++ ;  
        }
         
        for (char i : ransomNote)
        {

            letter_map[i] -- ;  
            if(letter_map[i] < 0) return false ; 
        }
        
        return true ; 
    }
};