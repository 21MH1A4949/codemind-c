#include<stdio.h>
#include<math.h>
int prime(int n){
    if(n==0 || n==1){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;    
}


int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    for (int i=1;i<10000000;i++)
    {
        if (prime(n1+n2+i)){
            printf("%d",i);
            break;
        }
    }
}