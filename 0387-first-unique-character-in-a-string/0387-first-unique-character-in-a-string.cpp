class Solution {
public:
    int firstUniqChar(string s) {
        int hsh[26];
        memset(hsh, 0, sizeof(hsh));

        for( int i = 0; i< s.size(); ++i)
        {
            hsh[s[i] - 'a']++;
        }

        for(int i = 0; i < s.size(); ++i)
        {
            if(hsh[s[i] - 'a'] ==1) return i;
        }

        return -1;
    }
};