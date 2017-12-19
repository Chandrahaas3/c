#include <stdio.h>

int main(void) {
int n,a[1000],i,j,sum1=0,sum2=0,n1=0,n2=0,avg1,avg2;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n/2;i++)
{
	sum1+=a[i];
	n1++;
}
for(i=n/2;i<n;i++)
{
sum2+=a[i];
n2++;
}
avg1=sum1/n1;
avg2=sum2/n2;
if(avg1==avg2)
printf("yes");
else
printf("No");

	return 0;
}
