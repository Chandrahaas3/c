#include <stdio.h>

int main(void) {
long long int n;
scanf("%lld",&n);
if(n<0)
printf("%lld is negative",n);
else if(n>0)
printf("%lld is positive",n);
else
printf("%lld is zero",n);
	return 0;
}
