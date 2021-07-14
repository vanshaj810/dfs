#include<stdio.h>
void main()
{ int a[50],i,n,num,loc;
printf("Enter size");
scanf("%d",&n);
printf("Enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter number for deletion ");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(a[i]==num)
loc=i;
}
for(i=loc;i<n-1;i++)
{
a[i]=a[i+1];
}
printf("Array after deletion");
for(i=0;i<n-1;i++)
printf("%d",a[i]);

}
