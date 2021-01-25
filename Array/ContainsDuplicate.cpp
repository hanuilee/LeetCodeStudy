//***** runtimes: 24ms, memory usage 20MB
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> list;
        for(vector<int>::iterator it = nums.begin(); it < nums.end(); it++)
        {
            if(list.empty() == false && list.find(*it)!=list.end())
                return true;
            
            list.insert(*it);
        }
        return false;
    }
};


//***** runtimes: 16ms, memory usage 15.6MB
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty())
            return false;
        sort(nums.begin(), nums.end());
        for(vector<int>::iterator it = nums.begin()+1; it != nums.end(); it++)
        {
            if(*it==*(it-1))
                return true;
        }
        return false;
    }
};


//***** runtimes: 12ms, memory usage 15.6MB
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty())
            return false;
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};
