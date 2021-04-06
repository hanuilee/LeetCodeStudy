#include <random>
using namespace std;

class Solution {
    vector<int> nums;
    vector<int> shuffled;
public:
    Solution(vector<int>& nums) {
        this->nums.clear();
        this->nums=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return this->nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        this->shuffled=nums;
        for (int i = 0; i < this->shuffled.size(); i++) {
            int pos = rand()%this->shuffled.size();
            swap(this->shuffled[pos], this->shuffled[i]);
        }
        return this->shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */