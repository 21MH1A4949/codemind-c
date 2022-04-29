#include<stdio.h>
int main()
{
    int t,i,n,temp,reverse=0,rem;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        reverse=0;
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n/=10;
        }
       if (temp==reverse)
       {
           printf("True
");
       }
       else
       {
           printf("False
");
       }    
    }
}