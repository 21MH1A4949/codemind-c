#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1%2==0 || n2%2==0)
    {
        printf("Player 1");
    }
    else
    {
        printf("Player 2");
    }
    return 0;
}