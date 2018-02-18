#include<stdio.h>
#include<stdlib.h>

int binary_conversion(int num){
    if (num == 0)
        return 0;
    else
        return (num % 2) + 10 * binary_conversion(num / 2);
}

int binary(int n, int i)
{
    int k;
    for (i--; i >= 0; i--)
   {
      k = n >> i;
      if (k & 1)
      	printf("1");
      else
      	printf("0");
    }
}

int binary1(long long int n,long long int i)
{
    long long int k;
    for (i--; i >= 0; i--)
   {
      k = n >> i;
      if (k & 1)
          printf("1");
      else
         printf("0");
    }
}

int binary_onversion(int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return (b % 2) + 10 * binary_conversion(b / 2);
    }
}
typedef union
{
      float f;
      struct
      {
            unsigned int mantissa : 23;
            unsigned int exponent : 8;
            unsigned int sign : 1;
       } field;
} myfloat;

typedef union
{
      double f;
      struct
      {
            unsigned long long int mantissa : 52;
            unsigned int exponent : 11;
            unsigned int sign : 1;
       } field;
} mydouble;

int main(){
	int min,choice,num,bin;
	char s;
	printf("1.integer\n2.float\n3.double\n4.char\n");
	int next=0;
	while(next==0)
	{
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("enter a decimal number");
			scanf("%d",&num);
			bin = binary_conversion(num);
			printf("The binary equivalent of %d is %d\n", num, bin);
			break;
		case 2:
			printf("enter a float number");
			myfloat var;
			printf("Enter any float number: ");
			scanf("%f",&var.f);
			printf("%d ",var.field.sign);
			binary(var.field.exponent, 8);
			printf(" ");
			binary(var.field.mantissa, 23);
		       	printf("\n");
			break;
		case 3:
			printf("emter a double number");
			mydouble var1;
			printf("Enter any float number: ");
			scanf("%lf",&var1.f);
			printf("%d ",var1.field.sign);
			binary1(var1.field.exponent, 11);
			printf(" ");
			binary1(var1.field.mantissa, 52);
			printf("\n");
			break;
		case 4:
			printf("enter a charcter");
			scanf("%s",&s);
			int b;
			b=s;
			min = binary_onversion(b);
			printf("The binary equivalent is %d\n",min);	
			break;	
		default:
			printf("enter a valid number");			 
			break;
	 	}
	 printf("press 0 to check other value:");
	 scanf("%d",&next);
	}
	 return 0;
}
