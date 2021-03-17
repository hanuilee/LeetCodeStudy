class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m = m - 1;
        n = n - 1; 
        
        while (m >= 0 && n >= 0) { 
            int length = m + n + 1;             
            if(nums1[m] > nums2[n])
                nums1[length] = nums1[m--];
            else
                nums1[length] = nums2[n--];
        } 
        
        if (m == -1) { 
            for (int length = 0; length <= n; ++length)
                nums1[length] = nums2[length];
        } 
        
        return ;
    }
};