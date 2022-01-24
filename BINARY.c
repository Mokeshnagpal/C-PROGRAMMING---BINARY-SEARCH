#include <stdlib.h>
#include <stdio.h>
int main()
{
    int l=0,x=0;
    printf("Input the length of array -\n");
    scanf("%d",&l);
    int a[l];
    printf("Input %d numbers continuously -\n",l);
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nInput the number to be searched -\n");
    scanf("%d",&x);
    int f=0,e=0,m=0;
    e=l-1;
    m=(f+e)/2;
    while(f<=e)
    {
        if(a[m]<x)
            f=m+1;
        else if(a[m]>x)
            e=m-1;
        if(a[m]==x)
        {
            printf("Number found at %d position",m+1);
            exit(0);
        }
        m=(f+e)/2;
    }
    printf("%d not found",x);
    return 0;
}
