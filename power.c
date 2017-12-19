#include<stdio.h>
int main()
{
	int n,pow;
	scanf("%d%d",&n,&pow);
    int i,power=1;
    for(i=0;i<pow;i++)
    power=power*n;
    printf("%d",power);
	return 0;
}
