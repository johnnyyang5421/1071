#include<stdio.h>
int main()
{
    int m1;
    int m2;
    int ans1;
    int ans2;
    int ans3;
    int ans4;
    int ans5;
    printf("Enter two integers: ");
    scanf("%d %d",&m1,&m2);
    ans1=m1+m2;
    ans2=m1-m2;
    ans3=m1*m2;
    ans4=m1/m2;
    ans5=m1 % m2;
    printf("%d+%d=%d\n",m1,m2,ans1);
    printf("%d-%d=%d\n",m1,m2,ans2);
    printf("%d*%d=%d\n",m1,m2,ans3);
    printf("%d/%d=%d\n",m1,m2,ans4);
    printf("%d %d=%d\n",m1,m2,ans5);
}
