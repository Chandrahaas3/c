#include<stdio.h>
main()
{
int n1,n2,i,j,rem,count=0,c=0;
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
count=0;
int t=i;
while(t!=0)
{
rem=t%2;
t=t/2;
if(rem==1)
count++;
}

printf("\n%d",count);
int flag=0;
for(j=2;j<count/2;j++)
{
if(count%j==0)
{
flag=1;
}
}
if(flag==0&&count!=1)
c++;
}
printf("\nc=%d",c);
}
