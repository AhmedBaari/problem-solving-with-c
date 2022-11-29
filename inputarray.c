#include <stdio.h>

int main () {
int input_num;
int index;
printf("Size of array: ");
scanf("%d", &input_num);
int arr[input_num];

for (index = 0; index < input_num; index++) {
printf("Enter number %d: ", index+1);
scanf("%d", &arr[index]);

} 
for (index = 0; index < input_num; index++) {
printf("Element %d: %d\n", index, arr[index]);
} 

return 0;
}
