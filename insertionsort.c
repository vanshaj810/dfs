#include<stdio.h>

void main()
{ int a[50],i,j,temp,n;
  
  printf("Enter the size of an array=");
  scanf("%d",&n);
  printf("Enter the elements of array=");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  { temp=a[i];
    j=j-1;
    while(j>=0&&temp<a[j])
    { a[j+1]=a[j];
      j--;
      }
    a[j+1]=temp;
    }
    printf("\nElements after Insertion sort are=");
    for(i=0;i<n;i++)
    printf("%d",&a[i]);
   
    }
