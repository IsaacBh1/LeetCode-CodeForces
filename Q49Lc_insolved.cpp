#include<vector>
#include<map> 
#include<bits/stdc++.h>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.length()!= t.length()) return false ; 
        std::unordered_map<char , int> char_map ; 
        for (char i : s)
            char_map[i]++ ;
        for (char i : t)
            char_map[i]-- ; 
        
        for (auto i : char_map)
            if(i.second != 0) return false ; 
        return true; 
    }
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        
        std::unordered_map<std::string , std::vector<std::string>> anagrams_map ; 
        for (std::string i : strs)
        {
            std::string copy = i ;
            std::sort(i.begin() , i.end()); 
            anagrams_map[i].push_back(copy) ;  
        }
        std::vector<std::vector<std::string>> anagrams_collection ; 
        for (auto i : anagrams_map)
        {
            anagrams_collection.push_back(i.second) ; 
        }
        return anagrams_collection ; 

        
        // std::vector<std::vector<std::string>> collection_anagrams  ; 
        // std::vector<std::string> vector_anagrams ; 
        // for (int i = 0; i < strs.size(); i++)
        // {
        //     vector_anagrams.push_back(strs[i]) ; 
        //     for (int j = i+1; j < strs.size(); j++)
        //     {
        //         if(isAnagram(strs[i] , strs[j])){
        //             vector_anagrams.push_back(strs[j]) ;
        //             strs.erase(strs.begin() + j) ;
        //             j-- ; 
        //         }
        //     }
        //     strs.erase(strs.begin() + i) ;
        //     i-- ; 
        //     collection_anagrams.push_back(vector_anagrams); 
        //     vector_anagrams.clear() ; 
        // }
        // return collection_anagrams ; 
    }
};
