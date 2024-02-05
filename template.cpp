#include <iostream>
#include <string>
using namespace std;
 
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

template <class T> int any_switch(T x) {

    switch((int)x) {
        case 5:
            return (int)x;
        default:
            return -1; // only integer
    };

}


template <typename T> class Array {
private:
    T* ptr;
    int size;
 
public:
    Array(T arr[], int s);
    void print();
};
 
template <typename T> Array<T>::Array(T arr[], int s) // constructor
{
    cout << "s=" << s << endl;
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
 
template <typename T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}


template <class T> class MyLine {
private:
    T obj;
    int size;
    char end_char;
 
public:
    MyLine(T obj, int s, char end);
    void print();
};

template <class T> MyLine<T>::MyLine(T object, int s, char end) // constructor
{
    
    
    obj = object;
    size = s;
    end_char = end;
    cout << obj << endl;
}

template <class T> void MyLine<T>::print()
{
    
    cout << obj << end_char << endl;
}


template <class T, class U = char> class A {
public:
    T x;
    U y;
    A(T x) { cout << "Constructor Called" << x << endl; }
};
 


int main()
{
    // Call myMax for int
    cout << myMax<int>(3, 7) << endl;
    // call myMax for double
    cout << myMax<double>(3.0, 7.0) << endl;
    // call myMax for char
    cout << myMax<char>('g', 'e') << endl;

    cout << myMax<string>("qsdqsdq", "fffff") << endl;


    cout << any_switch<int>(5) << endl;

    cout << any_switch<double>(5.0) << endl;

    int arr[5] = {1,2,3,4,5};

    Array<int> a(arr, sizeof(arr)/sizeof(arr[0]));
    a.print();

    string x = "Geeks";
    MyLine<string> ml(x, 6, 'X');
    ml.print();

    A<int> a1(7);



 
    return 0;
}