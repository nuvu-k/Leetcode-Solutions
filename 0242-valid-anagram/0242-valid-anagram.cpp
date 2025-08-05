class Solution {
public:
    bool isAnagram(string s, string t) {
        int hsh1[26];
        memset(hsh1, 0, sizeof(hsh1));
        int hsh2[26];
        memset(hsh2, 0 , sizeof(hsh2));

        for( int i = 0; i< s.size(); ++i)
        {
            hsh1[s[i] - 'a']++;
        }

        for( int i = 0; i< t.size(); ++i)
        {
            hsh2[t[i] - 'a']++;
        }

        for(int i = 0; i< 26; ++i)
        {
            if (hsh1[i] != hsh2[i]) return false;
        }

        return true;
    }
};