#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int stack[MAX_SIZE];
void push(int);
int pop();
void traverse();
int top=-1;
void main()
{
int element,choice;
while(1)
{
printf("Stack operations.\n");
printf("1. Insert into stack(Push operation).\n");
printf("2. Delete from stack(Pop operation).\n");
printf("3. Traverse stack.\n");
printf("4. Exit \n");
printf("Enter your choice.\n");
scanf("%d",&choice);
switch(choice)
{
case 1: if(top==MAX_SIZE-1)
printf("Error overflow\n\n");
else
{ printf("Enter the value to insert =");
scanf("%d",&element);
push(element);
}
break;
case 2: if(top==-1)
printf("Error underflow\n\n");
else
{
element=pop();
printf("Element removed from stack is %d\n",element);
}
break;
case 3: traverse();
break;
case 4: exit(0);
}
}
}
void push(int value)
{
top++;
stack[top]=value;
}
int pop()
{
int element;
if(top==-1)
return top;
element=stack[top];
top--;
return element;
}
void traverse()
{
int d;
if(top==-1)
{ printf("Stack is empty.\n\n");
return;
}
printf("There are %d elements in stack.\n",top+1);
for(d=top;d>=0;d--)
printf("%d\n",stack[d]);
printf("\n");
}
