#include<stdio.h>
void main()
{
    int n,i,z;
    printf("Enter a number:\n");
    scanf("%d",&n);
    z=n;
    printf("The natural numbers using for loop in reverse are:\n");
    for(i=n;i>0;i--)
    {
       printf("%d ",i);
    }
    printf("\n");
    printf("The natural numbers using while loop in reverse are:\n");
    while(n>0)
    {
        printf("%d ",n);
        n--;
    }
    printf("\n");
    printf("The natural numbers using do while loop in reverse are:\n");
    do
    {
        printf("%d ",z);
        z--;

    }
    while(z>0);

}
