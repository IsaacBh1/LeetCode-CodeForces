#include<string>
#include<iostream>
#include <cctype>
class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string PureS ="" ; 
        for (char i : s)
            if((i >= 'a' && i <= 'z' )||( i >= 'A' && i <= 'Z')||(i >= '0' && i <= '9')) PureS += i ;
        //std::cout << PureS;
        for (int i = 0; i < PureS.length(); i++)
        {
            if(std::tolower (PureS[i]) != std::tolower (PureS[PureS.length()-1-i])) return false ; 
        }
        
        return true; 
        
    }
};