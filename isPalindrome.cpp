class Solution {
public:
    bool isPalindrome(int x) {
    // Convert x to a string so we can check its characters
    string x_str = to_string(x);
    
    // Check if the string is equal to its reverse
    return x_str == string(x_str.rbegin(), x_str.rend());

    }
    
};
