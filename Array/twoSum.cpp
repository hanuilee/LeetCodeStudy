class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        for(size_t i = 0; i < nums.size()-1; i++)
        {
            for(size_t j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
            }
        }
        return out;
    }
};