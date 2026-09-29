#include <stdio.h>
#include <stdlib.h>

#ifdef LOCAL_TEST

struct ListNode
{
    int val;
    struct ListNode* next;
};

#endif

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL)
    {
        struct ListNode* nextNode = current->next;

        current->next = previous;

        previous = current;
        current = nextNode;
    }

    return previous;
}

#ifdef LOCAL_TEST

void printList(struct ListNode* head)
{
    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }

    printf("\n");
}

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
    third->next = NULL;

    struct ListNode* head = first;

    printf("Original list: ");
    printList(head);

    head = reverseList(head);

    printf("Reversed list: ");
    printList(head);

    return 0;
}

#endif