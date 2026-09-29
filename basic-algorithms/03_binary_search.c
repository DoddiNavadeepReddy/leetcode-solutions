#include <stdio.h>

int search(int* nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

#ifdef LOCAL_TEST

int main()
{
    int nums[] = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int result = search(nums, 6, target);

    printf("Index: %d\n", result);

    return 0;
}

#endif