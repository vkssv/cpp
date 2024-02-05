#include <iostream>
using namespace std;

struct demo {
    int a;
};


int main(void) {

    int x = 5;
    int y = 6;

    demo d;

    int *p;

    p = &x;
    //p = &y;


    int& r = x;

    r = y; // just reassign THE VALUE !

    //&r = y;

    //p = NULL;

    //&r = NULL;

    //p++;
    r++;

    cout << r << endl;

    cout << &p << " " << &x << endl;

    cout << &r << " " << &x << endl; 

    demo* q = &d;

    demo& qq = d;


    q->a = 8;

    qq.a = 8;

    cout << p << endl;
    cout << r << endl;



    return 0;




}