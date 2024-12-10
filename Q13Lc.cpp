#include<string>
#include<map>
#include<iostream>

//iii => i < 


class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char , int>  keymap;  
        keymap['I'] =1 ; 
        keymap['V'] =5 ; 
        keymap['X'] =10 ; 
        keymap['L'] =50 ; 
        keymap['C'] =100 ; 
        keymap['D'] =500 ; 
        keymap['M'] =1000 ; 
        int number = 0 ; 
        for (int i = 0; i < s.length(); i++)
        {
            if(i + 1 < s.length() && keymap[s[i]] >= keymap[s[i+1]] ) {
                number += keymap[s[i]] ; 
            }
            else if(i + 1 < s.length() && keymap[s[i]] < keymap[s[i+1]]) {
                number +=(keymap[s[i+1]] - keymap[s[i]]) ; 
                i ++; 
            }else {
                number += keymap[s[i]] ; 
            }

        }
        return number ; 


    }
};