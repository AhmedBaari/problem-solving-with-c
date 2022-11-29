#include <stdio.h>

long recursive_multiply(long number) {
if (number !=0) {
return number = number * recursive_multiply(number-1);
} else {
return 1;
}
}
long main () {
long input_num;
printf("Enter a number to find the factorial of: ");
scanf("%li", &input_num);
long result = recursive_multiply(input_num);
printf("Factorial of the number is %li\n", result);
}
