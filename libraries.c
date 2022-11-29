#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

float sqrt_input, sqrt_output;

/* Square Root */
sqrt_output = sqrt(9);
printf("The square root of 9 is %f\n",sqrt_output);

/* String Concatenation */

char string_input_1[] = "hello";
char string_input_2[] = "world!\n";
strcat(string_input_1,string_input_2);
printf("The concatenated string is given below:\n %s",string_input_1); 

/* Strcopy */
char destination[10], source[10];
source[10] = "Hello this will be copied";
strcopy(source, destination);
print("Source: %c, Destination: %c", source, destination);

/* ctype */
char input_char = '5';
int is_integer = isdigit(input_char);
int is_alphabet = isalpha(input_char);
printf("Character: %c, Is Digit: %d, Is Alpha: %d", input_char, is_integer, is_alphabet);

}
