#include<stdio.h>
void main()
{ int ch,a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,k;
printf("Enter the rows of first matrix =");
scanf("%d",&r1);
printf("Enter the columns of first matrix =");
scanf("%d",&c1);
printf("Enter the elements of first matrix =");
for(i=0;i<r1;i++)
{ for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
}
printf("Enter the rows of second matrix =");
scanf("%d",&r2);
printf("Enter the columns of second matrix =");
scanf("%d",&c2);
printf("Enter the elements of second matrix =");
for(i=0;i<r2;i++)
{ for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
}
do
{ if(r1==r2&&c1==c2)
{ printf("Enter 1 for Addition \n Enter 2 for Subtraction");
if(c2=r1)
printf("Enter 3 for Multiplication");
printf("Enter 4 for transpose");
}
else if(r1!=c1&&c1==r2)
{ printf("Enter 3 for Multiplication");
 printf("Enter 4 for 1st matrix transpose");
}
else
printf("Enter 4 for 1st matrix transpose");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{ case 1: 
for(i=0;i<r1;i++)
 { 
     printf("\n");
   for(j=0;j<c1;j++)
   { 
       c[i][j]=a[i][j]+b[i][j];
     printf("%d",c[i][j]);
     printf("\t");
     }
     }
     break;
  case 2: 
  for(i=0;i<r1;i++)
   { 
       printf("\n");
   for(j=0;j<c1;j++)
   { c[i][j]=a[i][j]-b[i][j];
     printf("%d",c[i][j]);
     printf("\t");
     }
     }
     break;
  case 3: if(c1==c2)
   { for(i=0;i<r1;i++)
    { for(j=0;j<c2;j++)
     { c[i][j]=0;
     for(k=0;k<r2;k++)
     { c[k][i]=c[k][i]+a[k][j]*b[j][i];
      printf("%d\t",c[i][j]);
      }
      printf("\n");
      }
      }
  else printf("\nMatrix cannot be multiplied");
  }
  break;
  case 4: for(i=0;i<c1;i++)
  { printf("\n");
  for(j=0;j<r1;j++)
   { c[i][j] =a[i][j];
   printf("%d\t",c[i][j]);
   }  
}
   break;
  default: printf("\nWrong Input");
      }
  }
  while(ch<0);
  }
