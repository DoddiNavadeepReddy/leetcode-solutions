#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#ifdef LOCAL_TEST

struct ListNode
{
    int val;
    struct ListNode* next;
};

#endif

bool hasCycle(struct ListNode* head)
{
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

#ifdef LOCAL_TEST

int main()
{
    struct ListNode* first = malloc(sizeof(struct ListNode));
    struct ListNode* second = malloc(sizeof(struct ListNode));
    struct ListNode* third = malloc(sizeof(struct ListNode));

    first->val = 1;
    second->val = 2;
    third->val = 3;

    first->next = second;
    second->next = third;

    // Create a cycle:
    third->next = second;

    if (hasCycle(first))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}

#endif