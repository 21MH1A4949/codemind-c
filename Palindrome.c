#include<stdio.h>
int main(){
    int a,temp,reverse,i;
    scanf("%d",&a);
    
    temp = a;  
    reverse =0;
    while (temp>0){
        reverse = reverse*10 + temp%10; 
        temp/=10;
    }
    if (a==reverse){
        printf("True");
    }
    else{
        printf("False");
    }
}