#include <stdio.h>

/* FUNCTION AS GIVEN IN QUESTION */
int checker(int i) {
    int j;
    switch(i) {
    printf("%d\n",j);
        case 2: i=i*i;
        case 4: i=i*i;
        default: i=i*i;
        break;
        case 16:i=i*i;
    }
    j=i;
    printf("%d\n",j);
}

/* TESTING THE FUNCTION BY VALUES GIVEN IN QUESTION */
int main() {
    checker(2);
    checker(4);
    checker(16);
    checker(1);


    return 0;
}

/*
    OUTPUT
    256
    256
    256
    1
*/
