#include <stdlib.h>
#include <stdio.h>

#define max 5
int front = -1, rear = -1;
int CQueue[max];

void insert()
{
  int no;
  if ((front == 0 && rear == max - 1) || front == rear + 1)
  {
    printf("\nCircular Queue Is Full !\n");
    return;
  }
  printf("\nEnter a number to Insert:");
  scanf("%d", &no);
  if (front == -1)
    front = front + 1;
  if (rear == max - 1)
    rear = 0;
  else
    rear = rear + 1;
  CQueue[rear] = no;
}

void is_empty()
{
  if (front == -1)
  {
    printf("\nThe Circular Queue is Empty !!\n");
  }
  else
  {
    printf("\nThe Circular Queue is NOT Empty !!\n");
  }
}

int delete ()
{
  int e;
  if (front == -1)
  {
    printf("\nThe Circular Queue is Empty !!\n");
  }
  e = CQueue[front];
  if (front == max - 1)
    front = 0;
  else if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else
    front = front + 1;
  printf("\n%d was deleted !\n", e);
  return e;
}

void display()
{
  int i;
  if (front == -1)
  {
    printf("\nThe Circular Queue is Empty! Nothing To Display!!\n");
    return;
  }
  i = front;
  if (front <= rear)
  {
    printf("\n\n");
    while (i <= rear)
      printf("%d ", CQueue[i++]);
    printf("\n");
  }
  else
  {
    printf("\n\n");
    while (i <= max - 1)
      printf("%d ", CQueue[i++]);
    i = 0;
    while (i <= rear)
      printf("%d ", CQueue[i++]);
    printf("\n");
  }
}

int main()
{
  int w, no;
  while (1)
  {
    printf("\n1. Insert\n2. Delete\n3. Display\n4. Is Empty?\n5. EXIT\nEnter what you want:");
    scanf("%d", &w);

    switch (w)
    {
    case 1:
      insert();
      break;
    case 2:
      no = delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      is_empty();
      break;
    case 5:
      exit(1);
    default:
      printf("\nInvalid Choice!!\n");
    }
  }
}