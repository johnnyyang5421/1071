#include<stdio.h>

int main()
{
    float w1,w2;
    int h1;
    int h2;
    int hx1;
    int hx2;
    while(1)
    {


        printf("Please enter the height range(-1 to exit): ");
        scanf("%d %d",&h1,&h2);
        if(h1==-1,h2==-1)
        {
            printf("Bye! Coding by your_ID");
            return 0;
        }
        else
        {
            for(hx1=h1; hx1<=h2; hx1++)
            {
                hx2=hx1;
                w1=((hx1*hx1)*18.5)/10000;
                w2=((hx2*hx2)*24.0)/10000;
                printf("%d cm = %.1f ~ %.1f",hx1,w1,w2);
                printf("\n");

            }
        }
    }
}
