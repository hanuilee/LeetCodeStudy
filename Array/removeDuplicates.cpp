class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        int idx = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[idx] != nums[i])
            {
                nums[idx+1] = nums[i];
                idx ++;
            }
        }
        
        return idx+1; 
    }
};