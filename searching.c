#include<stdio.h>
#include<stdlib.h>
#define max 10
int main();
void binary_search(int a[max],int item,int n)
{
    int low=0,high=n,mid;
    do
    {
        mid=(low+high)/2;
        if(item==a[mid])
        {
            printf("item found at %d \n",mid+1);
            break;
        }
        else if(item>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }while(low<=high);
    if(low>high)
        printf("Item not found!\n");
    
}
void linear_search(int a[max],int item,int n)
{
    int t=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]==item)
        {
            t=i+1;
            break;
        }
    }
    if (t)
        printf("item found at %d\n",t);
    else
        printf("item not found!\n");
}
int main()
{
    int a[10],n,item;
    printf("enter the size of array: \n");
    scanf("%d",&n);
    a[n];
    printf("enter array elements:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the item to search:\n");
    scanf("%d",&item);
    printf("enter choice as 1 for binary search and 2 for linear search: \n");
    int ch;
    scanf("%d",&ch);
    if (ch==1)
        binary_search(a,item,n);

    else if (ch==2)
        linear_search(a,item,n);
    else 
        printf("wrong choice enterred! \n ");
}

