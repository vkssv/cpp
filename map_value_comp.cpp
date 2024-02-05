#include <iostream> 
#include <map> 
using namespace std; 
  
int main() 
{ 
  
    map<char, char> m = { 
        { 'x', 'A' }, 
        { 'b', 'B' }, 
        { 'c', 'C' }, 
        { 'd', 'C' }, 
        { 'e', 'E' }, 
    }; 
  
    auto last = *m.rbegin(); 
    auto i = m.begin(); 
  
    cout << "Map contains "
         << "following elements"
         << endl; 
  
    do { 
  
        cout << i->first 
             << " = "
             << i->second 
             << endl; 
    } while (m.value_comp()(*i++, last)); 
  
    return 0; 
} 