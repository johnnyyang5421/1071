#include<stdio.h>
int main()
{
    int N,N1,N2,N3,Nn3,N4,N5;
    printf("Enter N= ");
    scanf("%d",&N);
    N1=N/1000;
    N2=N/100-N1*10;
    N3=N/10-N2*10-N1*100;
    if(N3>=5)
    {
        Nn3=N3-5;
    }
    else if(N3<5)
    {
        Nn3=-(N3-5);
    }
    N4=N-N1*1000-N2*100-N3*10;
    printf("your encode = %d%d%d%d",Nn3,N4,N1,N2);
}
