#include<stdio.h>
int main()
{
    char ph_no[20];
    int n=0;
    scanf("%s",ph_no);
    while(ph_no[n]!=NULL)
    {
        n++;
    }
    if((n==10)&&(ph_no[0]!='0'))
    printf("Valid");
    else
    {
        printf("Invalid");
    }
    return 0;
}