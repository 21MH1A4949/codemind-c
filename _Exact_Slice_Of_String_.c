#include<stdio.h>

int main()
{
    int a,b;
    char str[200];
    scanf("%[^
]%*c",str);
    scanf("%d%d",&a,&b);
    int i;
    for (i=a;i<=b;i++)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}