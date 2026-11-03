# Sparse Arrays

> **Platform:** `HackerRank` | **Category:** `Strings` | **Language:** `CPP` | [Problem Link](https://www.hackerrank.com/challenges/sparse-arrays/problem?isFullScreen=true)

---

## Problem Statement

There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings. Return an array of the results. 

**Example**  

 

  

There are  instances of '',  of '', and  of ''. For each query, add an element to the return array: .

**Function Description**

Complete the function  with the following parameters:

* : an array of strings to search  

* : an array of query strings  

**Returns**  

* : the results of each query  

**Input Format**

The first line contains and integer , the size of . 

Each of the next  lines contains a string . 

The next line contains , the size of . 

Each of the next  lines contains a string .  

**Constraints**

 

 

 .

---

## Solution

```cpp
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
```

---

*Synced automatically with [DSA Vault](https://github.com).*