#include<stdio.h>
int main()
{
    int N,N1,N2,N3,N4,N5;
    printf("Enter N= ");
    scanf("%d",&N);
    N1=N/1000;
    N2=N/100-N1*10;
    N3=N/10-N1*100-N2*10;
    N4=N-N1*1000-N2*100-N3*10;
    N5=(N1+5) % 10;
    printf("your encode = %d%d%d%d",N3,N4,N5,N2);
}
