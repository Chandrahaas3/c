#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],n,k,i,j;
	scanf("%d%d",&n",&k);
	for(i=0;i<n;i++)
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	    {
	    	if(i!=j&&a[i]+a[j]==k)
	    	printf("%d %d",a[i],a[j]);
	    }
	}
	return 0;
}
