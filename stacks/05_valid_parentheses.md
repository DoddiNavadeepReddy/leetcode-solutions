# 20. Valid Parentheses (Easy)

- **LeetCode Link:** [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

## Approach
Used an array-based stack to push open brackets and match closing brackets in LIFO order.

## Complexity Analysis
- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(N)$

## Test Cases
- **Typical Case:** `s = "()[]{}"` $\rightarrow$ Output: `true`
- **Edge Case (Mismatched Pair):** `s = "(]"` $\rightarrow$ Output: `false`