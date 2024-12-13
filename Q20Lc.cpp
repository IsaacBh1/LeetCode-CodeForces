#include<string>
#include<stack>
class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> char_stack ; 
        for (char i : s)
        {
            if(i == '(' || i == '{' || i == '[' ){
                char_stack.push(i) ; 
            }
            else {
                if(char_stack.empty()) return false ; 
                if((i == '}' && char_stack.top() == '{')|| char_stack.top() == '(' && (i == ')') || (i == ']') && char_stack.top() == '['){
                    char_stack.pop(); 
                }
                else{
                    return false ; 
                }
            }
        }
        return char_stack.empty() ; 
    }
};