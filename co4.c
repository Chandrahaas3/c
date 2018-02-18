#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int genmatrix(int m,int n,int a[m][n])
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=1+rand()%15;
		}
	}
for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
	printf("\n");
	}
}
int multiply(int m,int n,int p,int q,int a[m][n],int b[p][q])
{
	int sum=0,mul[m][q];
	for (int c = 0; c < m; c++) {
		for (int d = 0; d < q; d++) {
			for (int k = 0; k < p; k++) {
				sum = sum +a[c][k]*b[k][d];
				}
			mul[c][d] = sum;
			sum = 0;
		}
	}
printf("\n product of matrices is \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			printf("%d  ",mul[i][j]);
		}
	printf("\n");
	}
}
int main()
{
	srand((unsigned int) time(NULL));
	int m,n,p,q;
	printf("enter rows and columns for matrix 1\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	genmatrix(m,n,a);
	printf("enter rows and columns for matrix 2\n");
	scanf("%d%d",&p,&q);
	int b[p][q];
	genmatrix(p,q,b);
	if(n==p)
	multiply(m,n,p,q,a,b);
	else
	printf("cant multiply these matrices");
	system("getconf -a | grep LEVEL1_ICACHE_SIZE");
	system("getconf -a| grep LEVEL2_CACHE_SIZE");
	system("getconf -a| grep LEVEL3_CACHE_SIZE");
}
