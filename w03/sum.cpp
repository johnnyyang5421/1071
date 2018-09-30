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
