#include <iostream>
using namespace std;
 
void swap_by_ptr(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

void swap_by_ref(int& x, int& y) {
    int z = y;
    y = x;
    x = z;

}

int main(void) {
    int a = 45;
    int b = 35;

    cout << "Before by ptr a= " << a << " b = " << b << endl;

    swap_by_ptr(&a, &b);

    cout << "After by ptr a= " << a << " b = " << b << endl;

    cout << "Before by ref a= " << a << " b = " << b << endl;

    swap_by_ref(a,b);

    cout << "After by ref a= " << a << " b = " << b << endl;

    return 0;


}