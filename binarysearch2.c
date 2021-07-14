#include <stdio.h>
#include <stdlib.h>

//BinarySearch
void main()
{   int n;
  //enter How many elements
    printf("enter how many numbers");
    scanf("%d",&n);
    
    //enter the numbers
    int a[n],i,s,flag;
    printf("enter the %d numbers",n);
    for(i=0;i<n;i++)
      { scanf("%d",&a[i]); }

    //enter the searchinf value
    printf("enter the number to search");
    scanf("%d",&s);

    int min, max=n-1,mid=()/2;
    for(min=0 ; min<=max ; mid=(min+max)/2)
    {
      if(s==a[mid])
        { flag=1; break;}
      if(s>a[mid])
        {min=mid+1;}
      

    }

    if(flag=1){
      printf(" found at %d",a[mid]);
      }
    else{
      printf("not found");   
    }
  printf("done");


}