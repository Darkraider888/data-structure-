#include<stdio.h>
int main()
{       int i,j,k,n;
        printf("array size =");
        scanf("%d",&n);
        int arr[n];

    for(i=0;i<=n-1;i++)
    {
        printf("enter the element = ");
        scanf("%d",&arr[i]);
    }
        printf("\nthe array is =");
    for(i=0;i<=n-1;i++)
        printf("%d ",arr[i]);
        printf("\ndeleting position =");
        scanf("%d",&j);
    for(i=j;i<=n-1;i++)
        arr[i]=arr[i+1];
        printf("\nthe deleting  array is =");
    for(i=0;i<=n-2;i++)
        printf("%d ",arr[i]);

}

