#include <stdio.h>


int main() {
/* Declaring an array */

int num_1;
int num_2;
int num_3;
int num_4;
int num_5;
int index;
int multiplier = 1;
int adder;

/* Accepting Number 1 */
printf("Number 1: ");
scanf("%d", &num_1);

/* Accepting Number 2 */
printf("Number 2: ");
scanf("%d", &num_2);

/* Accepting Number 3 */
printf("Number 3: ");
scanf("%d", &num_3);

/* Accepting Number 4 */
printf("Number 4: ");
scanf("%d", &num_4);

/* Accepting Number 5 */
printf("Number 5: ");
scanf("%d", &num_5); 


int myArray[5] = {num_1, num_2, num_3, num_4, num_5};

for (index=0; index < 5; index++) {
printf("Element %d is %d\n",index+1, myArray[index]);
multiplier *= myArray[index];
adder += myArray[index];
}
printf("The sum is %d and the product is %d\n", adder, multiplier);
}
