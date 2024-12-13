#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {  
                if (nums[i] + nums[j] == target) {
                    return vector<int>({i, j});
                }
            }
        }
        return vector<int>();  
    }
};

int main(int argc, char const *argv[]) {
    vector<int> V = {3, 2, 4};
    int s = 6;
    Solution solution;
    vector<int> v = solution.twoSum(V, s);

    for (int i : v) {
        cout << i << " ,";  
    }

    return 0;
}
