#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{ int info;
struct node*next;
}*top=NULL;
void main()
{ char ch='y';
int a;
while(ch=='y'||ch=='Y')
{ printf("\n1.Push Operation\n2.Pop Operation\n3.Traverse Operation");
printf("\nEnter your choice=");
scanf("%d",&a);
switch(a)
{ case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
default:printf("\nwrong choice");
}
printf("\nDo you want to continue(Y/N)=");
fflush(stdin);
scanf("%c",&ch);
}
}
void push()
{ int item;
struct node*ptr;
printf("\nEnter the elements for push operation=");
scanf("%d",&item);
ptr=(struct node*)malloc(sizeof(struct node));
ptr->info=item;
if(top==NULL)
{ top=ptr;
ptr->next=NULL;
}
else
{ ptr->next=top;
top=ptr;
}
}
void pop()
{ struct node*temp;
printf("\nDeleted element from stack is %d",top->info);
temp=top;
top=top->next;
free(temp);
}
void display()
{ struct node*temp;
if(top==NULL)
{ printf("\nStack contains no element");
}
else
{ temp=top;
while(temp!=NULL)
{ printf("\nRemaining elements of stack is\t%d",temp->info);
temp=temp->next;
}
}
}
