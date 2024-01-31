#include <iostream> 
#include <vector> 
#include <bits/stdc++.h>

using namespace std;

void printValues(int i) { cout << i << " " << endl; }
  
int main() 
{ 
    int arr[] = { 10, 20, 30, 40, 50 }; 
  
    cout << "Printing array elements: " << endl; 
    // range based for loop 
    for (int& val : arr) { 
        cout << val << " "; 
    } 
    cout << endl; 
  
    cout << "Printing vector elements: " << endl; 
    vector<int> v = { 10, 20, 30, 40, 50 }; 
  
    // range-based for loop for vector 
    for (auto& it : v) { 
        cout << it << " "; 
    } 
    cout << endl;

    vector<int> vect = { 1, 2, 3, 4, 5};

    for_each(vect.begin(), vect.end(), printValues);



  
    return 0; 
}