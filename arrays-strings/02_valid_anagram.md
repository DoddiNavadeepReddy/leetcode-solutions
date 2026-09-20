# 242. Valid Anagram (Easy)

- **LeetCode Link:** [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

## Problem Description
Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

## Approach
Created a frequency array of size 26 for lowercase English letters. Incremented frequencies for string `s` and decremented for string `t`.

## Complexity Analysis
- **Time Complexity:** $O(N)$ — Single pass through both strings.
- **Space Complexity:** $O(1)$ — Fixed array of size 26.

## Test Cases
- **Typical Case:** `s = "anagram"`, `t = "nagaram"` $\rightarrow$ Output: `true`
- **Edge Case (Different Lengths):** `s = "rat"`, `t = "car"` $\rightarrow$ Output: `false`