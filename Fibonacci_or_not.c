#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,number;    
 scanf("%d",&number);    
if((number==0) || (number==1))
{
    printf("True");
}
else{
    n3=n1+n2;
    while(n3<number)
    {
        n1=n2;
        n2=n3;
        n3=n1+n2;
    }
    if(n3==number){
         printf("True");
    }
    else{
    printf("False");
        }
}
  return 0;  
 }  