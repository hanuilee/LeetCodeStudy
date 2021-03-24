//**** First trial
//**** Time limit exceeded, when n

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        else if(n == 2)
            return 2;
        
        return climbStairs(n-1) + climbStairs(n-2);
    }
};



//**** Second Trial
//**** Runtime : 0 ms(?)
//**** Memory Usage : 6.1MB

class Solution {
public:
    int climbStairs(int n) {
        int steps(n+1);
        
        if(n>=1)
            steps[1] = 1;
        if(n>=2)
            steps[2] = 2;
    
        if(n>=3)
        {
            for(int i = 3; i <= n; i++)
                steps[i] = steps[i-1] + steps[i-2];       
        }           
        
        return steps[n];
    }
};



//**** leetcode submission

class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return n;
        int one = 1;
        int two = 2;
        int three = 0;
        
        for(int i = 3; i <= n; i++)
        {
            three = one+two;
            one = two;
            two = three;
        }
        return two;
    }
};