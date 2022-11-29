#include <stdio.h>

int main() {
	printf("------- 2D ARRAYS ------");
	int index1, index2;
	int small_array[3][2] = {{1,2},{3,4},{5,6}};
	for (index1=0;index1<3;index1++) {
		for (index2=0;index2<2;index2++) {
		printf("Outer %d Inner %d: %d\n", index1+1, index2+1, small_array[index1][index2]);
		}
	}


	printf("------- 3D ARRAYS ------");
	int index4, index5, index6;
	int myArray[5][4][3] = {{{1,2,3},{4,5,6},{7,8,9},{10,11,12}},{{13,14,15},{16,17,18},{19,20,21},{22,23,24}},{{25,26,27},{28,29,30},{31,32,33},{34,35,36}},{{37,38,39},{40,41,42},{43,44,45},{46,47,48}},{{49,50,51},{52,53,54},{55,56,57},{58,59,60}}};
	for (index4=0;index4<5;index4++) {
		for (index5=0;index5<4;index5++) {
			for (index6=0;index6<3;index6++) {
			printf("Main %d -- Sub %d -- Internal %d --> %d\n", index4+1, index5+1, index6+1, myArray[index4][index5][index6]);
			}
		}
	}
}
