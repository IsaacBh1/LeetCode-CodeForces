#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    int GetAreaFromFlore(const std::vector<int>& flore) {
        int p1 = 0, area = 0, piece = 0;

        while (p1 < flore.size() && flore[p1] == 0) p1++; 
        for (int p2 = p1 + 1; p2 < flore.size(); p2++) {
            if (flore[p2] == 0) {
                piece++;
            } else {
                area += piece; 
                piece = 0;     
                p1 = p2;       
            }
        }

        return area;
    }

    int trap(std::vector<int>& height) {
        int area = 0;
        int max_height = *std::max_element(height.begin(), height.end());
        for (int i = 0; i < max_height; i++) {
            area += GetAreaFromFlore(height);

            for (int& h : height) {
                if (h > 0) h--;
            }
        }

        return area;
    }
};

// int main() {
//     Solution solution;
//     std::vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//     std::cout << "Trapped water: " << solution.trap(height) << std::endl;
//     return 0;
// }
