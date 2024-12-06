
//#include<iostream>
#include<vector>
#include<string>
class Solution {

public:
    int minOperations(std::vector<std::string>& logs) {
        int counter = 0 ; 
        for (int i = 0; i < logs.size(); i++)
        {
            if(logs[i] == "../") 
                if(counter > 0) counter -- ;
            else if (logs[i] == "./")
                counter += 0 ; 
            else 
                counter ++ ; 
        }
        return counter ; 
        
    }
};