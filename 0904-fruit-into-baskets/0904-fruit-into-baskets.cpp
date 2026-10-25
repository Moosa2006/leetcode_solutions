class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxF = 0;
        int left=0;
        unordered_map<int,int> frequency;
        
        for(int i=0;i<n;i++){
            frequency[fruits[i]]++;

            if(frequency.size() > 2){
                frequency[fruits[left]]--;

                if(frequency[fruits[left]] == 0){
                    frequency.erase(fruits[left]);
                }
                left++;
            }
            if(frequency.size() <= 2){

                maxF=max(maxF,i-left+1);
            }

        }

        return maxF;
    }
};