
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
  // For loop
  for (int i = 1; i <= 5; i++) {
    cout << "For loop: The value of i is: " << i << endl;
  }
 
  // While loop
  int j = 1;
  while (j <= 5) {
    cout << "While loop: The value of j is: " << j << endl;
    j++;
  }
 
  // Do-while loop
  int k = 1;
  do {
    cout << "Do-while loop: The value of k is: " << k << endl;
    k++;
  } while (k <= 5);
 
  // Range-based for loop
  vector<int> myVector = {1, 2, 3, 4, 5};
  for (int element : myVector) {
    cout << "Range-based for loop: The value of element is: " << element << endl;
  }
 
  return 0;
}
