#include<map>
#include<string>
#include<iostream>

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        if(text.length() < 7) return false ; 
        std::map<char , int> name_map ; 
        const std::string balloon = "balon"; 
        name_map['b'] = 0 ; 
        name_map['a'] = 0 ; 
        name_map['l'] = 0 ; 
        name_map['o'] = 0 ; 
        name_map['n'] = 0 ; 
       for (char i : text)
            if(balloon.find(i) != std::string::npos) 
                name_map[i] ++ ; 
       

       name_map['l'] = (int)(name_map['l'] / 2); 
       name_map['o'] = (int)(name_map['o'] / 2);
        int min = name_map['b']; 
        for (auto i : name_map)
        {
            if(min > i.second) min = i.second ; 
            if(min == 0) return 0; 
        }
        return min ; 
    }
};