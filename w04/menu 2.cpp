#include<stdio.h>
void prchar(char c,int h)
{
    for(int i=1; i<=h; i++)
        printf("%c",c);
}
void drawRecfilled(int h,int w)
{
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(i==1 || i==h || j==1 || j==w)
                printf("*");
            else
                printf("*");
        }
        printf("\n");
    }
}
void drawRec(int h,int w)
{
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(i==1 || i==h || j==1 || j==w)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void drawVT(int h,int t,int f)
{
    for(int i=1; i<=h; i++)
    {
        prchar('*',i);
    }
}
void drawIT(int h,int t,int f)
{
    for(int i=1;i<=h;i++)
    {

    }
}
int main()
{

    int X;
    int h;
    int w;
    int t;
    int f;
    while(1)
    {
        printf("Main menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Exit\n");
        printf("please enter your choise:  ");
        scanf("%d",&X);
        if(X==3)break;
        switch(X)
        {
        case 1:
            printf("Enter height and width and filled: ");
            scanf("%d %d %d",&h,&w,&f);
            if(f)
            {
                drawRecfilled(h,w);
                break;
            }
            else
            {
                drawRec(h,w);
                break;
            }
        case 2:
            printf("Enter height and type and filled: ");
            scanf("%d %d %d",&h,&t,&f);
            switch(t)
            {
            case 1:

                if(f)
                {
                    for(int i=1; i<=h; i++)
                    {
                        prchar('*',i);
                        printf("\n");
                    }
                }
                else
                {
                    for(int i=1; i<=h; i++)
                    {
                        if(i==1 || i==h)
                        {
                            prchar('*',i);
                        }
                        else
                        {
                            printf("*");
                            prchar(' ',i-2);
                            printf("*");
                        }
                        printf("\n");
                    }
                }


                break;
            case 2:

                break;
            case 3:

                break;
            }
        }
    }
    return 0;
}


