#include<stdio.h>
int main()
{
	int n,rem;
	scanf("%d",&n);
	while(n)
	{
		rem=n%10;
		n=n/10;
	printf("%d",rem);
	}

	return 0;
}
