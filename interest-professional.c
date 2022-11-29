#include<stdio.h>
#include<math.h>



int main()
{
	 float p, t, r, si, ci;
	 printf("Enter principal amount (p): ");
	 scanf("%f", &p);
	 printf("Enter time in year (t): ");
	 scanf("%f", &t);
	 printf("Enter rate in percent (r): ");
	 scanf("%f", &r);
	
	 /* Calculating simple interest */
	 si = (p * t * r)/100.0;
	
	 /* Calculating compound interest */
	 ci = p * (pow(1+r/100, t) - 1);
	
	 printf("Simple Interest = %0.3f\n", si);
	 printf("Compound Interest = %0.3f", ci);
	 return(0);
}

