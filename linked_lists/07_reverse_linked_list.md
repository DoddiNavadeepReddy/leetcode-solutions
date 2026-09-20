# 206. Reverse Linked List (Easy)

- **LeetCode Link:** [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)

## Approach
Iterative approach using three pointers (`prev`, `curr`, `next`) to reverse link directions in-place.

## Complexity Analysis
- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(1)$

## Test Cases
- **Typical Case:** `head = [1,2,3,4,5]` $\rightarrow$ Output: `[5,4,3,2,1]`
- **Edge Case (Single Node / Empty):** `head = []` $\rightarrow$ Output: `[]`