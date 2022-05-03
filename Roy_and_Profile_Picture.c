#include<stdio.h>
int main()
{
    int L,N,W,H,i;
    scanf("%d %d",&L,&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d ",&W,&H);
        if(L>W || L>H)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if (W>=L && H>=L) {
            if(W==H)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}