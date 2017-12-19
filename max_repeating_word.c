#include<stdio.h>
#include<string.h>
main()
{
	char arr[50][50];
	int repeat[50];
	int num,i,j,k,max;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	scanf("%s",arr[i]);
	for(i=0;i<num;i++)
	{
		
		int hash[26]={0};
		for(j=0;arr[i][j]!='\0';j++)
		{
			char temp=arr[i][j];
			hash[temp%97]++;
			
		}
		max=0;
		for(k=0;k<26;k++)
		{
			
			if(hash[k]>max)
			max=hash[k];
		}
		
		repeat[i]=max;
	}
	max=0;
	int index;
	for(i=0;i<num;i++)
	{
		
		if(repeat[i]>max)
		{
			max=repeat[i];
			index=i;
	}	
	}
	printf("The max repeating character word is %s\n",arr[index]);
}
