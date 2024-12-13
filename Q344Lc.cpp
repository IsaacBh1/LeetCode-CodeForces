#include<vector>

class Solution {
public:
    void reverseString(std::vector<char>& s) {
        char p ; 
        for (int i = 0; i < s.size()/2; i++)
        {
            p = s[i]; 
            s[i] = s[s.size() - 1 - i] ; 
            s[s.size() - 1 - i] = p ; 
        }  
    }
};