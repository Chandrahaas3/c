#include <stdio.h>

int main(void) {
	int a[100],n,i,b[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]]++;
	
	}
    for(i=0;i<n;i++)
    {
    	if(b[a[i]]>0)
    	{
    	printf("%d\n",a[i]);
    	b[a[i]]=0;
        }
    }
 	return 0;
}
