#include<stdio.h>

int main(){
    
    int n,i,target;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (target != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1){
        printf("%d %d",first,last);
    }
    else{
        printf("-1 -1");
    }

    return 0;
}