#include<stdio.h>
#include<string.h>
main()
{
char arr[30];
scanf("%s",arr);
int i,len;
len=strlen(arr);
printf("Output1: ");
for(i=len-1;i>=0;i--)
printf("%c",arr[i]);
printf("\n");
printf("Output2: ");
for(i=len-1;i>=0;i--)
{
if(arr[i]!='a'&&arr[i]!='e'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u'&&arr[i]!='A'&&arr[i]!='E'&&arr[i]!='I'&&arr[i]!='O'&&arr[i]!='U')
{
printf("%c",arr[i]);
}
}
}
