class Solution {
public:
    int gcd(int a, int b){
        while(b != 0){
            int r = a % b;
            a= b;
            b= r;
        }
        return a;
    }
    
    void rotate(vector<int>& nums, int k) {
        int cycle = gcd(nums.size(), k);        

        for(int c = 0; c < cycle; c++)
        {        
            int idx_init = c;
            int idx_cur = c;
            int num_cur = nums[c];
            while(1)
            {        
                idx_cur = (idx_cur + k) % nums.size();
                
                int temp = nums[idx_cur];            
                nums[idx_cur] = num_cur;
                num_cur = temp;        
                
                if(idx_cur == idx_init)
                    break;
            }
        }
    }
};
