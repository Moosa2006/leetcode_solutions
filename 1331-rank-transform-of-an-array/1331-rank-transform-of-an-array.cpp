#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    std::vector<int> arrayRankTransform(std::vector<int>& arr) {
        // Create a copy of the original array to sort
        std::vector<int> sorted_arr = arr;
        std::sort(sorted_arr.begin(), sorted_arr.end());
        
        // Map each unique element to its sequential rank
        std::unordered_map<int, int> rank_map;
        int rank = 1;
        for (int num : sorted_arr) {
            if (rank_map.find(num) == rank_map.end()) {
                rank_map[num] = rank++;
            }
        }
        
        // Replace elements in the original array with their rank
        std::vector<int> result;
        result.reserve(arr.size());
        for (int num : arr) {
            result.push_back(rank_map[num]);
        }
        
        return result;
    }
};
