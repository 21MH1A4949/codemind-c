#include<stdio.h>
#include<math.h>

int main(){
    
    int m,n,i,j,cout=0,c=0;
    
    scanf("%d%d",&m,&n);
    if (m==1){
        m=2;
    }
    for(j=m;j<=n;j++){
        cout=0;
        for(i=2;i<=sqrt(j);i++){
            if(j%i==0){
                cout++;
            }
        }
        if(cout==0){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
