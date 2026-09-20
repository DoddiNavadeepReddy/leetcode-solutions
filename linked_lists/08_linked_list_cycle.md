# 141. Linked List Cycle (Easy)

- **LeetCode Link:** [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)

## Approach
Floyd's Cycle-Finding Algorithm (Tortoise and Hare) with two pointers moving at different speeds.

## Complexity Analysis
- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(1)$

## Test Cases
- **Typical Case:** `head = [3,2,0,-4]`, `pos = 1` $\rightarrow$ Output: `true`
- **Edge Case (No Cycle):** `head = [1]`, `pos = -1` $\rightarrow$ Output: `false`