#include <stdlib.h>

typedef struct {
    int data[30000];
    int min[30000];
    int top;
} MinStack;

MinStack* minStackCreate() {
    MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
    obj->top = -1;
    return obj;
}

void minStackPush(MinStack* obj, int val) {
    obj->top++;
    obj->data[obj->top] = val;
    if (obj->top == 0 || val < obj->min[obj->top - 1]) {
        obj->min[obj->top] = val;
    } else {
        obj->min[obj->top] = obj->min[obj->top - 1];
    }
}

void minStackPop(MinStack* obj) {
    if (obj->top >= 0) obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->data[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->min[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj);
}