#include <stdio.h>
//using recursion to print the factorial of numbers
long recursive_multiply(long number) {
if (number !=0) {
return number = number * recursive_multiply(number-1);
} else {
return 1;
}
}
long main () {
long input_num;
//taking the input value of the number from  user 
printf("Enter a number to find the factorial of: ");
scanf("%li", &input_num);
long result = recursive_multiply(input_num);
//printing the factorial of a given number
printf("Factorial of the number is %li\n", result);
}
