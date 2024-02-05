#include <iostream>
#include <stdio.h>

using namespace std;

int globalVar = 42;

void changePtrValue(int** pp) {

    printf(">>%s: before %p\n", __func__, pp);

    *pp = &globalVar;
    printf(">>%s: after %p\n", __func__, pp);

}


void changeRefValue(int*& pp) {
    pp = &globalVar;


}

int main(void) {
    
    int var = 23;
    int *var_ptr = &var;
    int*& pp = var_ptr;

    cout << "Before: " << *var_ptr << endl;
    printf(">>%s: before %p\n", __func__, var_ptr);
    printf(">>%s: before pp %p\n", __func__, pp);

    changeRefValue(pp);
    //changePtrValue(pp);

    cout << "After: " << *var_ptr << endl;
    printf(">>%s: after %p\n", __func__, var_ptr);
    printf(">>%s: after pp %p\n", __func__, pp);




    return 0;


}