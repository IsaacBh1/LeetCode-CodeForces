#include<string>
#include<vector>
#include<iostream>
class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string str = "" ; 
        char current ; 
        bool isContains  ; 
        for (int i = 0; i < strs[0].length(); i++)
        {
            isContains = true ; 
            current =  strs[0][i];
            for (int j = 0; j < strs.size(); j++)
            {
                if(strs[j][i] != current){
                    isContains = false; 
                    break;
                }
            }
            if(isContains)
                str += current ; 
            else break;
            
        }
        return str; 
    }
};

int main(int argc, char const *argv[])
{
    Solution solution ; 
    std::vector<std::string> strs = {"flower","flow","flight"} ; 
    std::string s = solution.longestCommonPrefix(strs);
    std::cout <<  s << std::endl; 
    return 0;
}
