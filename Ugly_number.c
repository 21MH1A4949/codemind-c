#include<stdio.h>
int prime(int p){
    if (p==1){
        return 0;
    }
    for(int i=2;i<(p/2)+1;i++){
        if (p%i==0){
            return 0;
        }
    }
    return 1;    
}





int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if (n%i==0 && prime(i)){
            if(i!=2&&i!=3&&i!=5){
                count=0;
                break;
            }
            else{
                count=1;
            }  
            
        }
    }
    if(count==1){
        printf("Ugly Number");
    }
    else if(n==1){
        printf("Ugly Number");
    }
    else{
        printf("Not Ugly Number");
    }
    return 0;
}