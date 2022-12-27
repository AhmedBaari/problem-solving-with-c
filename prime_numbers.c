#include<stdio.h>
int main(){
int num1,num2;
	printf("Enter the number 1:");
	scanf("%d",&num1);
	printf("Enter the number 2:");
	scanf("%d",&num2);
//function to get prime numbers between n1 and n2
	int prime(int n1,int n2){
		int i,j;
//using for loop for traversing the numbers between n1 and n2
		for(i=n1;i<n2;i++){
	                int test=0;
//testing the conditions for composite(non prime numbers) and rejecting it
			for(j=2;j<i;j++){
				if(i%j==0){test=1;}
				}
//Left over prime numbers are being printed
	                if(test==0){printf("%d\n",i);}
		}
   				}

printf("Prime numbers in between the range are:");
prime(num1,num2);
					
				
				
	}
