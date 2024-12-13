#include<string>
#include<map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.length() != t.length()) return false ; 
        int char_count[26] = {0} ; 
        for (int i = 0; i < s.length(); i++)
        {
            char_count[s[i]-'a']++ ; 
            char_count[t[i]-'a']-- ; 
        }
        
        for (int i : char_count)
            if(i != 0) return false; 
        
        return true; 
    }
    // bool isAnagram(std::string s, std::string t) {
    //     if(s.size()!= t.size()) return false ; 
    //     std::map<char , int> char_map ; 
    //     for (char i : s)
    //         char_map[i]++ ; 

    //     for (char i : t)
    //         char_map[i]-- ; 
        
    //     for (auto i : char_map)
    //         if(i.second > 0) return false ; 
    //     return true; 
    // }
};