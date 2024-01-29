#include <iostream>

using namespace std;

int x = 10;

/*
void func(int *age) {    
    // this variable is local to the 
    // function func() and cannot be  
    // accessed outside this function 
    *age=18;     
} 
  
int main() { 

    int age;
    func(&age);

    cout<<"Age is: "<<age; 
      
    return 0; 
}

*/

int main(void) {

    int x = 500;
    cout << "Global value X is " << ::x << endl;
    cout << "Local value X is " << x << endl;

    return 0;

} 

