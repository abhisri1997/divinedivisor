//This is The Coding Area
#include<stdio.h>
int main()
{
    int i,T,j;
    scanf("%d",&T);
    int arr[T];
    if (T<=15)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d",&arr[i]);
        }
    }
    for(i=1;i<=T;i++){
        for(j=1;j<=arr[i];j++){
            if(arr[i]%j==0)
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
