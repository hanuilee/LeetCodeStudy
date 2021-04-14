class Solution {
public:
    bool isPowerOfThree(int n) {
        //std::cout << fmod(log10(n)/log10(3),1) << std::endl;
        if(fmod(log10(n)/log10(3),1)==0)
            return true;
        else
            return false;
    }
};