#include<stdio.h>
int fac(int a);
void strong(int a);
int main()
{
    int x;
    scanf("%d",&x);
    strong(x);
    return 0;
}
int fac(int a)
{
    if(a==0)               // int pro=1; for(int i=2;i<=n;i++){pro=pro*i;}return pro;
    {
        return 1;
    }
    int fac1=fac(a-1)*a;
    return fac1;
}
void strong(int a)
{
    int rem=0,sum=0,num=a;
    while(a>0)
    {
        rem=a%10;
        sum=sum+fac(rem);
        a=a/10;
    }
    if(sum==num)
    {
        printf("Yes %d is a strong number",num);
    }
    else
    {
        printf("No %d is not strong",num);
    }
}
