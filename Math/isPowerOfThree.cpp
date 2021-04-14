class Solution {
public:
    bool isPowerOfThree(int n) {
        //std::cout << fmod(log(n)/log(3),1) << std::endl;
        //std::cout << fmod(log10(n)/log10(3),1) << std::endl;
        if(fmod(log10(n)/log10(3),1)==0)
            return true;
        else
            return false;
    }
};



// https://leetcode.com/problems/power-of-three/discuss/77876/a-summary-of-all-solutions-new-method-included-at-1530pm-jan-8th
log(243) = 5.493061443340548    log(3) = 1.0986122886681098
   ==> log(243)/log(3) = 4.999999999999999

log10(243) = 2.385606273598312    log10(3) = 0.47712125471966244
   ==> log10(243)/log10(3) = 5.0
