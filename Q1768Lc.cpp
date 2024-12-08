#include<string>
#include<cmath>
//bba , i = 0 , i = 1 , i = 2 , length = 3 
//"a b " i = 1
//"a p bqss"
//aabp
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string word = "" ;
        for (int i = 0; i < std::min(word1.length() , word2.length()); i++)
        {
                word += word1[i] ; 
                word += word2[i] ;     
        }
        if(word1.length() > word2.length()) {
            for (int i = word2.length(); i < word1.length(); i++)
            {
                word += word1[i]; 
            }
        }
        else if(word1.length() < word2.length()) {
            for (int i = word1.length(); i < word2.length(); i++)
            {
                word += word2[i]; 
            }
        }

        return word ; 
    }
};