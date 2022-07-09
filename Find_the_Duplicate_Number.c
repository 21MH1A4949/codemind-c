#include<stdio.h>

int main(){
    
    int a,i,j,duplicate,temp;
    
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<=a;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<a;i++){
        temp = arr[i];
        for(j=0;j<a;j++){
            if (i==j){
                continue;
            }
            else if(temp==arr[j]){
                duplicate=temp;
            }
        }
    }
    printf("%d",duplicate);
    
    return 0;
}