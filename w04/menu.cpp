#include<stdio.h>


int main(){

    int X;
    int h;
    int w;
    int t;
    int c;
    while(1){
    printf("Main menu\n");
    printf("1. Rectangle\n");
    printf("2. Vertical Triangle\n");
    printf("3. Exit\n");
    printf("please enter your choise:  ");
    scanf("%d",&X);
    if(X==3)break;
    switch(X){
    case 1:
            printf("Enter height and width: ");
            scanf("%d %d",&h,&w);
            for(int i=1;i<=h;i++){
                    for(int j=1;j<=w;j++){
                        if(i==1 || i==h || j==1 || j==w)
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
            }
            break;
    case 2:
        printf("Enter height and type: ");
        scanf("%d",&h);
        for(int i=1;i<=h;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i==1 || i==h || j==1 || j==i )
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");

        }
        break;
    }
}

    return 0;
}
