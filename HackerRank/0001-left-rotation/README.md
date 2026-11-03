# Left Rotation

> **Platform:** `HackerRank` | **Language:** `CPP` | [Problem Link](https://www.hackerrank.com/challenges/array-left-rotation/problem?isFullScreen=true)

---

## Problem Statement

A  operation on a circular array shifts each of the array's elements  unit to the left. The elements that fall off the left end reappear at the right end. Given an integer , rotate the array that many steps to the left and return the result. 

**Example** 

 

  

After  rotations, .

**Function Description**  

Complete the  function with the following parameters:  

* :  the amount to rotate by  

* : the array to rotate  

**Returns**  

* : the rotated array

**Input Format**

The first line contains two space-separated integers that denote , the number of integers, and , the number of left rotations to perform. 

The second line contains  space-separated integers that describe .  

**Constraints**

*   

*   

* 

**Sample Input**

```
STDIN      Function
-----      --------
5 4         n = 5 d = 4
1 2 3 4 5  arr = [1, 2, 3, 4, 5]
```

**Sample Output**

```
5 1 2 3 4
```

**Explanation**

To perform  left rotations, the array undergoes the following sequence of changes:

---

## Solution

```cpp
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
        return k == same - 1 ? same : k == same ? n - same : 0;
    }
};class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size(), same = 0;
        for (int i = 0; i < n; ++i) 
            same += s[i] == s[(i + 1) % n];
```

---

*Synced automatically with [DSA Vault](https://github.com).*