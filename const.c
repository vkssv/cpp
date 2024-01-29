#include <stdio.h>


/*
int main() {
    
    int i = 10;
    int j = 20;
    /* ptr is pointer to constant
    const int *ptr_i = &i; // 2 pointers with different qualifiers to same memory area in read-write
    int *ptr_j = &i;
 
    printf("init i: %d, j=%d\n", *ptr_i, *ptr_j);
    /* error: object pointed cannot be modified
    using the pointer ptr
    
 
    //ptr_i = &j; /* valid 
    //ptr_j = &i;
    *ptr_j = 500;
    printf("i: %d, j=%d\n", i, j);
 
    return 0;

}
*/



int main() {
    
    const int i = 10;
    int j = 20;
    // ptr is pointer to constant
    const int *ptr_i = &i; 
    int *ptr_j = &i;
 
    printf("init i: %d, j=%d\n", *ptr_i, *ptr_j);
    // error: object pointed cannot be modified
    
    
 
    //ptr_i = &j; /* valid 
    //ptr_j = &i;
    *ptr_j = 500;
    printf("i: %d, j=%d\n", i, j);
 
    return 0;

}





