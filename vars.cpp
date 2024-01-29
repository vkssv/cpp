#include <iostream>
#include <stdio.h>
using namespace std;

#define XX 66
 
int main()
{
    // this is declaration of variable a
    const int a = 5;
   
    // this is initialisation of a
    //a = 10;
   
    // this is definition = declaration + initialisation
    int b = 20;
 
    // declaration and definition
    // of variable 'a123'
    char a123 = 'a';


    if (1) {
        b = 10;
    };
 
    // This is also both declaration and definition
    // as 'c' is allocated memory and
    // assigned some garbage value.
    float c;
 
    // multiple declarations and definitions
    int _c, _d45, e;
 
    // Let us print a variable
    cout << a << endl;
    cout << c << endl;
    cout << a123 << endl;
    cout << XX << endl;

 
    return 0;
}