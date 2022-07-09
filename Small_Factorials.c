#include<stdio.h>

int main(){
    
    int n,t,i,j,fact;
    scanf("%d",&t);
    if (1<=t && t<=100){
        for(i=1;i<=t;i++){
            scanf("%d",&n);
            if (1<=n && n<=100){
                fact =1;
                for(j=1;j<=n;j++){
                    fact *= j;
                }
                printf("%d
",fact);
            }
        }
    }
    
    return 0;
}

