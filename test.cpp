#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct StackNode
{
int data;
struct StackNode* next;
};
struct StackNode* newNode(int data)
{
struct StackNode* stackNode =
(struct StackNode*) malloc(sizeof(struct StackNode));
stackNode->data = data;
stackNode->next = NULL;
return stackNode;
}
int isEmpty(struct StackNode *list)
{
return !list;
}
void push(struct StackNode** list, int data)
{
struct StackNode* stackNode = newNode(data);
stackNode->next = *list;
*list = stackNode;
printf("%d pushed to stack\n", data);
}
int pop(struct StackNode** list)
{
if (isEmpty(*list))
return INT_MIN;
struct StackNode* temp = *list;
*list = (*list)->next;
int popped = temp->data;
free(temp);
return popped;
}
int peek(struct StackNode* list)
{
if (isEmpty(list))
return INT_MIN;
return list->data;
}
int main()
{
struct StackNode* list = NULL;
push(&list, 10);
push(&list, 20);
push(&list, 30);
printf("%d popped from stack\n", pop(&list));
printf("Top element is %d\n", peek(list));
return 0;
}
