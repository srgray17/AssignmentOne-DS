#ifndef header_h_included
#define header_h_included
#include <stdio.h>
#include <stdbool.h>
#define MAXSTACK 10
typedef char StackEntry;

struct stackNode
{
    int top;
    StackEntry entry[MAXSTACK];
    char data;
    struct stackNode* next;
};

bool pushStack(struct stackNode** stack,
    void* newData);
int popStack(struct stackNode** stack);
bool isEmpty(struct stackNode* stack);
void display(struct stackNode* stack);
int stackTop(struct stackNode* stack);


void* reverse(struct stackNode** stackNode);
void decimalToHexidecimal(int value);
void moveCars();

#endif // !header_h_included