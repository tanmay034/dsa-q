for (int i = 0; i < n; ++i) 
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
};class Solution {
public:
    int countRotations(string s, int k) {
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
};class Solution {
public:
    int countRotations(string s, int k) {
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;