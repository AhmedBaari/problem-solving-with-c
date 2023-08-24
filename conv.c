#include <stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature value in celsius:");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("Temperature value in Fahrenheit is:");
	printf("%f",f);
	return 0;
}
