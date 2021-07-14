#include<stdio.h>
int a[50];
void bubble_sort(int a[],int);
void main()
{ int i,n;
  printf("\nEnter the limit of array=");
  scanf("%d",&n);
  printf("\nEnter the elements of array=");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  bubble_sort(a,n);
  }
  void bubble_sort(int a[],int n)
  { int i,j,temp;
    for(i=0;i<n-1;i++)
    { for(j=0;j<n-i-1;j++)
      { if(a[j]>a[j+1])
      { temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
      }
    }
    printf("\nAfter the bubble sort the order=");
    for(i=0;i<n;i++)
    { printf("%d\n",a[i]); }
    }
