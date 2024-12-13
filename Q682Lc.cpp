#include<vector>
#include<string>
#include <iostream>
#include <regex>
#include <string>

class Solution {
public:


    int calPoints(std::vector<std::string>& operations) {   
        std::vector<int> nums_vector ; 
        int sum = 0 ;
        int number ; 
        for (std::string i : operations)
        {
            if(i == "C") {
                number = nums_vector[nums_vector.size()-1] ; 
                nums_vector.pop_back() ; 
                sum -= number ; 
            }
            else if( i == "D") {
                nums_vector.push_back( nums_vector.back()*2);
                sum +=  nums_vector.back() * 2 ; 
            }
            else if(i == "+") {
                int number1 = nums_vector.back() ; 
                nums_vector.pop_back() ; 
                int number2 = nums_vector.back() ; 
                sum+=(number1 + number2) ; 
                nums_vector.push_back(number1) ; 
                nums_vector.push_back(number1 + number2);
            }else {
                
                number = stoi(i) ; 
                nums_vector.push_back(number);
                sum += number ;  
            }
        }
        return sum ; 
    }
};