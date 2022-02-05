#include<stdio.h>
int main()
{
    int arr[100]={},n,i=0,rem=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        arr[i]=rem;
        n=n/2;
        i++;
    }
    while(i--)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
