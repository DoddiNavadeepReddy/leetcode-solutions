#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data[10000];
    int minData[10000];
    int top;
} MinStack;

MinStack* minStackCreate()
{
    MinStack* stack = malloc(sizeof(MinStack));

    stack->top = -1;

    return stack;
}

void minStackPush(MinStack* obj, int val)
{
    obj->top++;

    obj->data[obj->top] = val;

    if (obj->top == 0)
    {
        obj->minData[obj->top] = val;
    }
    else
    {
        if (val < obj->minData[obj->top - 1])
        {
            obj->minData[obj->top] = val;
        }
        else
        {
            obj->minData[obj->top] = obj->minData[obj->top - 1];
        }
    }
}

void minStackPop(MinStack* obj)
{
    obj->top--;
}

int minStackTop(MinStack* obj)
{
    return obj->data[obj->top];
}

int minStackGetMin(MinStack* obj)
{
    return obj->minData[obj->top];
}

void minStackFree(MinStack* obj)
{
    free(obj);
}

#ifdef LOCAL_TEST

int main()
{
    MinStack* stack = minStackCreate();

    minStackPush(stack, -2);
    minStackPush(stack, 0);
    minStackPush(stack, -3);

    printf("Minimum: %d\n", minStackGetMin(stack));

    minStackPop(stack);

    printf("Top: %d\n", minStackTop(stack));

    printf("Minimum: %d\n", minStackGetMin(stack));

    minStackFree(stack);

    return 0;
}

#endif