#include<stdio.h>
#include<conio.h>
int gcd(int,int);
int main(){
    int a,b;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    printf("gcd of given no is:%d",gcd(a,b));
    return 0;

}
int gcd(int m, int n){
int r,temp;
if (m<n)
{
temp=m;
m=n;
n=temp;
}
while (n!=0)
{
    r=m%n;
    m=n;
    n=r;
}
return m;
}