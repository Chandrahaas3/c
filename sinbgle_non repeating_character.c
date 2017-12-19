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
    	if(b[a[i]]==1)
    	{
    	printf("%d\n",a[i]);
        break;
        }
    }
 	return 0;
}
