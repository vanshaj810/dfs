#include<stdio.h>
void selection_sort(int[],int);

void main()
{ int a[50],i,n;
   printf("\nEnter the limit of array=");
   scanf("%d",&n);
   printf("\nEnter the elements of array=");
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
   selection_sort(a,n);
   printf("\nThe sorted elements are:\n");
   for(i=0;i<n;i++)
   {
   printf("\t%d",a[i]);
    }
  }
  void selection_sort(int a[],int n)
  { int i=0,loc=0,temp;
    for(i=0;i<n;i++)
    { loc=min_ele(a,i,n);
      temp=a[loc];
      a[loc]=a[i];
      a[i]=temp;
      }
    }
    int min_ele(int a[],int lb,int ub)
    {
    int min=lb;
    while(lb<ub){ 
    if(a[lb]<a[min])
    min=lb;
    lb++;
    }
    return min;
    }