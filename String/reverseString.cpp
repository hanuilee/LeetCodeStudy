class Solution {
public:
    void reverseString(vector<char>& s) {
        int haf = (int)(s.size()/2.0);
        for(int i = 0; i < haf; i ++)
        {
            char temp = s[s.size()-1-i];
            s[s.size()-1-i] = s[i];
            s[i] = temp;
        }
    }
};