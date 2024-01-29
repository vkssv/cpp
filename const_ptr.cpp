#include <stdio.h>



/*
int main(void) {

    int i = 10;
    int j = 20;

    int *const ptr = &i;

    printf(">> point to value %d\n", *ptr);

    *ptr = 500;

    printf(">> point to value %d\n", *ptr);

    ptr = &j;



    return 0;

}
*/


int main(void) {

    const int x = 5;
    int y = 3;

    const int *const ptr_x = &x;


    printf(">> %p point to %d", ptr_x, *ptr_x);

    //ptr_x = &y;

    *ptr_x = 100;

    return 0;





}