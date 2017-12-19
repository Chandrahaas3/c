#include <stdio.h>

int main(void) {
	char a[100];
	char b[100];
	char c[100];
	int len1,len2,len3;
	int i,k=0;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		c[k++]=a[i];
	}
		for(i=0;b[i]!='\0';i++)
	{
		c[k++]=b[i];
	}
	b[k]='\0';
	printf("%s",c);
	return 0;
}
