# Largest and Second Largest Practice Problem in Arrays

> **Platform:** `CodeChef` | **Language:** `CPP` | [Problem Link](https://www.codechef.com/practice/course/arrays-new/ARRAYSP01/problems/LARGESECOND)

---

## Problem Statement

### Largest and Second Largest
You are given an array AAA of NNN integers.

Find the **maximum** sum of **two distinct** integers in the array.

**Note:** It is guaranteed that there exist at least two distinct integers in the array.

### Input Format

* The first line of input will contain a single integer TTT, denoting the number of test cases.

Each test case consists of multiple lines of input.

* The first line of each test case contains single integer NNN — the size of the array.

* The next line contains NNN space-separated integers, denoting the array AAA.

### Output Format

For each test case, output on a new line, the maximum sum of two distinct integers in the array.

### Constraints

* 1≤T≤10001 \leq T \leq 10001≤T≤1000

* 2≤N≤1052 \leq N \leq 10^52≤N≤105

* 1≤Ai≤10001 \leq A_i \leq 10001≤Ai​≤1000

* The sum of NNN over all test cases does not exceed 2⋅1052\cdot 10^52⋅105.

### Sample 1:

Input**

Output**

```
4
3
4 1 6
7
3 7 2 1 1 5 3
5
8 2 9 4 9
2
1 2
```

```
10
12
17
3
```

### Explanation:

**Test case 111:** The maximum sum of two distinct elements is 4+6=104 + 6 = 104+6=10 .

**Test case 222:** The maximum sum of two distinct elements is 7+5=127 + 5 = 127+5=12.

**Test case 333:** The maximum sum of two distinct elements is 8+9=178 + 9 = 178+9=17.

**Test case 444:** The maximum sum of two distinct elements is 1+2=31 + 2 = 31+2=3.

---

## Solution

```cpp
class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};
```

---

*Synced automatically with [DSA Vault](https://github.com).*