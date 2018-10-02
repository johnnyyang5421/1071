#include<stdio.h>
int sum(int n1,int n2);

int main()
{
    int n1, n2;
    int total=0;
    printf("Enter n1 n2:  ");
    scanf("%d %d",&n1,&n2);
    while(n1>=0 && n2>=0)
    {
        total = sum(n1,n2);
        printf("sum(%d,%d) = %d\n",n1,n2,total);
        printf("Enter n1 n2:  ");
        scanf("%d %d",&n1,&n2);
    }
    return 0;
}

int sum(int n1,int n2)
{
    int  ans=0;
    while(n1<=n2)
    {

        ans=ans+n1;
        n1=n1+1;
    }
    return ans;
}







/*
#include<stdio.h>
int main()
{
int n1,n2,ans;
printf("Enter n1,n2:");
while(   scanf("%d %d",&n1,&n2)  )
{
if(n1==-1)
{
return 0;
}
ans=0;
while(n1<=n2)
{
ans=ans+n1;
n1=n1+1;
}
printf("sum(%d,%d) = %d\n",n1,n2,ans);
printf("Enter n1,n2:");
}
}
/*
