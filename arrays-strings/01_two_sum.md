# 1. Two Sum (Easy)

- **LeetCode Link:** [Two Sum](https://leetcode.com/problems/two-sum/)

## Problem Description
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

## Approach
Used a nested loop approach to iterate through every pair of elements in the array and check if their sum equals `target`.

## Complexity Analysis
- **Time Complexity:** $O(N^2)$ — Two nested loops through the array.
- **Space Complexity:** $O(1)$ — Auxiliary space for output array.

## Test Cases
- **Typical Case:** `nums = [2, 7, 11, 15]`, `target = 9` $\rightarrow$ Output: `[0, 1]`
- **Edge Case (Negative Numbers):** `nums = [-3, 4, 3, 90]`, `target = 0` $\rightarrow$ Output: `[0, 2]`