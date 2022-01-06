#include<stdio.h>
int main()
{
    int n,arr[100][100]={},count1=0,count2=0,diff=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
            {
                printf("%d\n",arr[i][j]);
                count1=count1+(arr[i][j]*arr[i][j]);
            }
            if(j==((n-i)+1))
            {
                count2=count2+(arr[i][j]*arr[i][j]);
                printf("%d\n",arr[i][j]);
            }
        }

    }
     printf("%d and %d\n",count1,count2);
    if(count1>count2)
    {
        diff=count1-count2;
    }
    else
    {
        diff=count2-count1;
    }
    printf("%d",diff);
    return 0;
}
