# 155. Min Stack (Medium)

- **LeetCode Link:** [Min Stack](https://leetcode.com/problems/min-stack/)

## Approach
Maintained an auxiliary `min` array along with the primary `data` array to retrieve the minimum element in $O(1)$ time.

## Complexity Analysis
- **Time Complexity:** $O(1)$ for all operations (`push`, `pop`, `top`, `getMin`).
- **Space Complexity:** $O(N)$

## Test Cases
- **Typical Case:** `push(-2), push(0), push(-3), getMin()` $\rightarrow$ Output: `-3`