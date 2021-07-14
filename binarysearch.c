#include<stdio.h>
void main()
{ int arr[20],mid,i,num,beg,end,found=0,a;
  printf("Enter the limit of array=");
  scanf("%d",&a);
  printf("Enter the elements of array=");
  for(i=0;i<a;i++)
  scanf("%d",&arr[i]);
  printf("Enter the elements you want to search=");
  scanf("%d",&num);
  beg=0;
  end=a-1;
  while(beg<=end)
  { mid=(beg+end)/2;
  if(arr[mid]==num)
  { printf("\nElement found at %d index",mid+1);
  found=1;
  break;
  }
  if(arr[mid]>num)
  end=mid-1;
  else
  { if(arr[mid]<num)
   beg=mid+1;
   }
   }
   if(found==0)
   printf("\nElement not found");
   }
