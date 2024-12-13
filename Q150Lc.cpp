#include<vector>
#include<string>
#include <iostream>
#include <stack>
#include <string>
class Solution {
public:
    bool isOperator(std::string op) {
        return op == "+" || op == "-" || op == "/" || op == "*" ; 
    }
    int doOperation(int num1 , int num2 , std::string op) {
        if( op == "+") return num1 + num2 ; 
        if( op == "-") return num1 - num2 ; 
        if( op == "/") return num1 / num2 ; 
        if( op == "*") return num1 * num2 ; 
        return 0;  
    }
    int evalRPN(std::vector<std::string>& tokens) {
        std::stack<int> numbers_stack ; 
        int num1 , num2 ; 
        for (std::string i : tokens)
        {
            if(isOperator(i)) {
                num1 = numbers_stack.top() ; 
                numbers_stack.pop() ; 
                num2 = numbers_stack.top() ; 
                numbers_stack.pop() ; 
                numbers_stack.push(doOperation(num2 , num1 , i)) ; 
            }
            else {
                numbers_stack.push(stoi(i)); 
            }
        }
        return numbers_stack.top() ; 
    }
};