class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    if (s.empty()) {
        return 0;
    }

    int n = s.length();
    int left = 0, right = 0, max_len = 1;
    unordered_set<char> chars;

    while (right < n) {
        if (chars.find(s[right]) == chars.end()) {
            chars.insert(s[right]);
            right++;
            max_len = max(max_len, (int)chars.size());
        } else {
            chars.erase(s[left]);
            left++;
        }
    }

    return max_len;
    }
};
