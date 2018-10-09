#include<stdio.h>

int main()
{
    int ht;
    printf("Please enter the height: ");
    scanf("%d",&ht);
    for(int i=1;i<=ht;i++)
    {
        for(int j=1;j<=ht-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int j=1;j<=2;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
