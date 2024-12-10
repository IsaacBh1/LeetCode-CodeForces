#include<string>
#include<iostream>

//atp 
//artsp
//
class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int si = 0 , ti = 0 ; 
        while (ti < t.length())
        {
            if(s[si] == t[ti]) {
                si++;
            }
            ti++ ; 
        }
        return si == s.length() ;
        
    }
};