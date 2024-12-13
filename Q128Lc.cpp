#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int GetTheHighestParent(int i, std::unordered_map<int, int>& groups_map) {
        if (groups_map[i] == std::numeric_limits<int>::max()) return i;
        return groups_map[i] = GetTheHighestParent(groups_map[i], groups_map);
    }

    std::unordered_map<int, int> GetAllParentsInAllMap(std::unordered_map<int, int>& groups_map) {
        std::unordered_map<int, int> highestParent;
        for (const auto& i : groups_map) {
            highestParent[i.first] = GetTheHighestParent(i.first, groups_map);
        }
        return highestParent;
    }

    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_map<int, int> groups_map;
        for (int i : nums) {
            groups_map[i] = std::numeric_limits<int>::max(); 
        }

        for (int i : nums) {
            if (groups_map.find(i + 1) != groups_map.end()) {
                groups_map[i] = i + 1;
            }
        }

        std::unordered_map<int, int> solution_map = GetAllParentsInAllMap(groups_map);

        int max_length = 0;
        for (const auto& i : solution_map) {
            max_length = std::max(max_length, i.second - i.first + 1);
        }

        return max_length;
    }
};
