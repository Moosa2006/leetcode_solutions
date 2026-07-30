class Solution {
public:
    string frequencySort(string s) {
std::unordered_map<char, int> freqMap;
        for (char c : s) {
            freqMap[c]++;
        }
        
        // Step 2: Store pairs of (character, count) in a vector so we can sort them
        std::vector<std::pair<char, int>> charCounts;
        for (auto& pair : freqMap) {
            charCounts.push_back(pair);
        }
        
        // Step 3: Sort the vector based on the counts in descending order
        // We use a custom lambda function to compare the integer frequencies
        std::sort(charCounts.begin(), charCounts.end(), [](auto& a, auto& b) {
            return a.second > b.second; 
        });
        
        // Step 4: Build the final result string
        std::string res = "";
        for (auto& pair : charCounts) {
            // Append the character 'pair.first', 'pair.second' number of times
            res.append(pair.second, pair.first);
        }
        
        return res;
    }
};