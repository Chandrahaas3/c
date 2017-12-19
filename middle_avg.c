#include<stdio.h>
main()
{
int N;
scanf("%d",&N);
int arr[N];
int i;
for(i=0;i<N;i++)
scanf("%d",&arr[i]);
int sum = 0;
float avg;

for (i = 0; i < N; i++)
    sum += arr[i];

avg = (float)sum / N;
sum = 0;

for (i = 0; i < N - 1; i++) {
    sum += arr[i];
    if (avg == (float)sum / (i+1)) {
         printf("Divide @ %d\n", i);
         return;
    }
}

printf("Arr is not suitable\n");
return;
}
