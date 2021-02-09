class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {        
        if (strs.size() == 0)
            return "";
        
        bool isSame = true;
        vector<char> prefix;
        
        for(int i = 0; i < strs[0].length(); i++)
        {
            for(int j = 1; j < strs.size(); j++)
            {
                if(strs[0][i] != strs[j][i])
                    isSame = false;
            }
            if(isSame)
                prefix.push_back(strs[0][i]);
        }
        
        if(prefix.size() == 0)
            return "";
        else
            return string(prefix.begin(), prefix.end());
    }
};