#include<stdio.h>

void main()
{ int a[20],i,n,f,e;

  printf("Enter the limit=");
  scanf("%d",&e);
  printf("Enter the values in array=");
  for(i=0;i<e;i++)
  scanf("%d",&a[i]);
  printf("Enter the number you want to search=");
  scanf("%d",&n);
  for(i=0;i<e;i++)
  { 
    if(n==a[i])
   { printf("\nNumber is found at %d",i+1);
     f=1;
   }
   else
   { continue;}
   }
   if(f!=1)
   printf("Number not found");
   }
  
