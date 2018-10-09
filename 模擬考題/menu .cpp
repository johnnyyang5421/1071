#include<stdio.h>
void math(int m1,int m2)
{
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
void BMI(int h1,int h2)
{
    float w1,w2;
    int hx1;
    int hx2;


    printf("Please enter the height range(-1 to exit): ");
    scanf("%d %d",&h1,&h2);
    for(hx1=h1; hx1<=h2; hx1++)
    {
        hx2=hx1;
        w1=((hx1*hx1)*18.5)/10000;
        w2=((hx2*hx2)*24.0)/10000;
        printf("%d cm = %.1f ~ %.1f",hx1,w1,w2);
        printf("\n");

    }
}
void DT(int ht)
{
    printf("Please enter the height: ");
    scanf("%d",&ht);
    for(int i=1; i<=ht; i++)
    {
        for(int j=1; j<=ht-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        for(int j=1; j<=2; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void NCE(int N)
{
    int N1,N2,N3,N4,N5;
    printf("Enter N= ");
    scanf("%d",&N);
    N1=N/1000;
    N2=N/100-N1*10;
    N3=N/10-N1*100-N2*10;
    N4=N-N1*1000-N2*100-N3*10;
    N5=(N1+5) % 10;
    printf("your encode = %d%d%d%d",N3,N4,N5,N2);
}
void NCD(int Nn)
{
    int N1,N2,N3,Nn3,N4,N5;
    printf("Enter N= ");
    scanf("%d",&Nn);
    N1=Nn/1000;
    N2=Nn/100-N1*10;
    N3=Nn/10-N2*10-N1*100;
    if(N3>=5)
    {
        Nn3=N3-5;
    }
    else if(N3<5)
    {
        Nn3=-(N3-5);
    }
    N4=Nn-N1*1000-N2*100-N3*10;
    printf("your encode = %d%d%d%d",Nn3,N4,N1,N2);
}
int main()
{
    int X;
    while(1)
    {
        printf("(1) Arithmetic Computation\n");
        printf("(2) List BMI ranges\n");
        printf("(3) Draw Four Vertical Triangles\n");
        printf("(4) Encode\n");
        printf("(5) Decode\n");
        printf("(6) Exit\n");
        printf("Please enter your choise: ");
        scanf("%d",&X);
        if(X==6)
        {
            return 0;
        }
        else
        {
            switch(X)
            {
            case 1:
                int m1,m2;
                math(m1,m2);
                break;
            case 2:
                int h1,h2;
                BMI(h1,h2);
                break;
            case 3:
                int ht;
                DT(ht);
                break;
            case 4:
                int N;
                NCE(N);
                break;
            case 5:
                int Nn;
                NCD(Nn);
                break;
            }
            printf("\n");
        }
    }
}
