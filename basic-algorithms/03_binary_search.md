# 704. Binary Search (Easy)

- **LeetCode Link:** [Binary Search](https://leetcode.com/problems/binary-search/)

## Problem Description
Given a sorted integer array `nums` and a target value, return index of `target` if present, else `-1`.

## Approach
Standard binary search technique using two pointers (`left` and `right`) and computing `mid`.

## Complexity Analysis
- **Time Complexity:** $O(\log N)$
- **Space Complexity:** $O(1)$

## Test Cases
- **Typical Case:** `nums = [-1,0,3,5,9,12]`, `target = 9` $\rightarrow$ Output: `4`
- **Edge Case (Element Not Found):** `nums = [-1,0,3,5,9,12]`, `target = 2` $\rightarrow$ Output: `-1`