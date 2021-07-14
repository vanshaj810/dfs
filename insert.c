#include<stdio.h>
#include<conio.h>
void main()
{ 
int a[20],n,loc,num,i;

 printf("Enter number");
 scanf("%d",&n);
 printf("Enter array");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter location");
 scanf("%d",&loc);
 printf("Enter data");
 scanf("%d",&num);
 for(i=n-1;i>=loc-1;i--)
 {
 a[i+1]=a[i];
 }
 a[loc-1]=num;

 for(i=0;i<n+1;i++)
 {
 printf("%d\n",a[i]);
 }
 
 }
