#include<vector>
#include<bits/stdc++.h>
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> arr ; 
        for (int i : nums) {
            if(arr.find(i) != arr.end()) return true ; 
            arr.insert(i);

        }
        return arr.size() != nums.size();
    }
};