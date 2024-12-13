#include <vector>
#include <map>
#include <string>
#include <iostream>

class Solution {
public:
    bool isRepeated(std::vector<char> arr) {
        std::map<char, int> Key_map;
        std::string numbers = "123456789";
        for (char i : arr) {
            if (numbers.find(i) != std::string::npos) {
                if (++Key_map[i] > 1) return true;
            }
        }
        return false; 
    }

    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::vector<char> arr;

        for (int i = 0; i < 9; i++) {
            arr = board[i];
            if (isRepeated(arr)) return false;
        }

        for (int i = 0; i < 9; i++) {
            arr.clear();
            for (int j = 0; j < 9; j++) {
                arr.push_back(board[j][i]);
            }
            if (isRepeated(arr)) return false;
        }
        
        for (int n = 0; n < 9; n += 3) {
            for (int k = 0; k < 9; k += 3) {
                arr.clear();
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        arr.push_back(board[n + i][k + j]);
                    }
                }
                if (isRepeated(arr)) return false;
            }
        }

        return true;
    }
};
