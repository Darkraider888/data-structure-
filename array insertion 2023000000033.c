#include<stdio.h>
int main()
{
       int i,j,n,k;
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
        printf("\ninserting position =");
        scanf("%d",&j);
        printf("\nnew number =");
        scanf("%d",&k);
    if(j<=n-1)
    {
    for(i=n-1;i>=j;i--)
        arr[i+1]=arr[i];
        arr[j]=k;
    }
    else
    {

            arr[j]=k;
    }
        printf("\nthe inserting  array is =");
    for(i=0;i<=n;i++)
        printf("%d ",arr[i]);
}
