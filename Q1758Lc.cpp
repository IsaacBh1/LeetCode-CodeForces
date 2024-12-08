#include<string>
#include<bits/stdc++.h>


class Solution {
public:
    int minOperations(std::string s) {
        int start_with_0 = 0 ; 
        int start_with_1 = 0 ; 
        std::string string0 = s ; 
        std::string string1 = s ;

        for (int i = 0; i < s.length(); i++)
        {
            if(i % 2 == 0) {
                if(string0[i] == '1') {
                    string0[i] == '0' ; 
                    start_with_0 ++ ; 
                }

                if(string1[i] == '0') {
                    string0[i] == '1' ; 
                    start_with_1 ++ ; 
                }
            }
            else {
                 if(string0[i] == '0') {
                    string0[i] == '1' ; 
                    start_with_0 ++ ; 
                }
                if(string1[i] == '1') {
                    string0[i] == '0' ; 
                    start_with_1 ++ ; 
                }
            }
        }

        return std::min(start_with_0 ,  start_with_1); 
         
        
    }
};