#include <stdio.h>
#include<string.h>
int main(void) {
    char array[1000];
    int len,i;
    int b[25]={0};
    scanf("%s",array);
    len=strlen(array);
    for(i=len-1;i>0;i--)
    {
    	if(array[i]!=array[i-1])
    	{
    		int temp=array[i]%97;
    		if(b[temp]==0)
    		{
    	printf("%c",array[i]);
    	b[temp]=1;
    	}
    	}
    }
	return 0;
}
