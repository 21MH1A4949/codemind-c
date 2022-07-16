#include<stdio.h>

int main()
{
    int n,se,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    int flag=0;
    for (i=0;i<n;i++)
    {
        if (se==arr[i])
        {
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf("-1");
    }
    
    return 0;
}