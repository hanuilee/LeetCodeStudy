class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0; 
        int count_zero = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[idx] = nums[i];
                idx++;                
            }
            else
                count_zero++;
        }
        
        for(int i = 0; i < count_zero; i++)
        {
            nums[nums.size()-i-1] = 0;
        }
        
    }
};