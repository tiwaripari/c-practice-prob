#include<iostream>
using namespace std;
int fac(int a)
{
    if(a==0)
    {
        return 1;
    }
    if(a==1)
    {
        return 1;
    }
    int product=fac(a-1)*a;
    return product;
}
int sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    int lastdigit=a/10;
    int rem=a%10;
    int sum1=0;
    sum1=sum(lastdigit)+rem;
    return sum1;
}
int main()
{

   int a=0,sos=0,sod=0;

   while(a!=-1)
    {
       scanf("%d",&a);
       sod=sum(fac(a))*sum(fac(a));
       sos=sos+sod;

   }
   cout<<sos;


   return 0;
}

