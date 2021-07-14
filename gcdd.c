#include <stdio.h>
void main()
{ int n1,n2,r,t=0;

    printf("Enter 2 numbers ");
    scanf("%d %d",&n1,&n2);

        if(n1<n2)
        { t=n1;
         n1=n2;
         n2=t;
        }
    
    while(n2!=0)
    {   r=n1%n2;
        n1=n2;
        n2=r;
    }
    
    printf("GCD= %d",n1);
    

}