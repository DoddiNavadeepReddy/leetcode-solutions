# 88. Merge Sorted Array (Easy)

- **LeetCode Link:** [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

## Approach
Three-pointer approach starting from the end of both arrays to merge in-place without auxiliary space.

## Complexity Analysis
- **Time Complexity:** $O(M + N)$
- **Space Complexity:** $O(1)$

## Test Cases
- **Typical Case:** `nums1 = [1,2,3,0,0,0]`, `m = 3`, `nums2 = [2,5,6]`, `n = 3` $\rightarrow$ Output: `[1,2,2,3,5,6]`
- **Edge Case (Empty First Array):** `nums1 = [0]`, `m = 0`, `nums2 = [1]`, `n = 1` $\rightarrow$ Output: `[1]`