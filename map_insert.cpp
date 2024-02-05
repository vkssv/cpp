#include<iostream>  
#include<map> // for map operations  
using namespace std;  
    
int main()  
{  
    // declaring map  
    map<char, int> mp;  
        
    // declaring iterators  
    map<char, int>::iterator it;  
    map<char, int>::iterator it1;  
    map<char, int>::iterator it2;  
        
    // declaring pair for return value of map containing  
    // map iterator and bool  
    //pair< map<char, int>::iterator, bool> ptr;  
      
    // using emplace() to insert pair element  
    // inserting 'a' to 24  
    // no "pair" needed, in-place construction  
    auto ptr = mp.insert( pair<char,int>('a', 24));  
        
    // checking if the pair was already present or newly inserted  
    // returns true. newly inserted  
    if (ptr.second)  
        cout << "The key was newly inserted" ;  
    else 
        cout << "The key was already present" ;  
        
    cout << endl;


    for(auto x: mp) {
      cout << x.first << "->" << 
              x.second << endl;
    }

    mp.insert(mp.begin(), pair<char, int>('x', 24) );

    for(auto x: mp) {
        cout << x.first << "->" << x.second << endl;
    }

    map<char, int> mp2;

    mp2.insert(mp.begin(), mp.end());


    for(auto x: mp2) {
        cout << x.first << "->" << x.second << endl;
    }


        
    // printing map pairs after insertion  
    /*
    cout << "The map pairs after 1st insertion are : \n";  
        
    for (it1 = mp.begin(); it1!=mp.end(); ++it1)  
        cout << it1->first << "->" << it1->second << endl;  
        
    cout << endl ;  
        
    // using emplace() to insert single pair  
    // inserting a to 24 // not inserted this time  
    ptr = mp.emplace('a', 24);  
        
    // checking if the key was already present or newly inserted  
    // returns false. already inserted  
    if(ptr.second)  
        cout << "The key was newly inserted" ;  
    else 
        cout << "The key was already present" ;  
        
    cout << endl ;  
        
    // printing map pairs after insertion  
    cout << "The map pairs after 2nd insertion are : \n";  
        
    for (it1 = mp.begin(); it1!=mp.end(); ++it1)  
        cout << it1->first << "->" << it1->second << endl;  
        
    it = mp.begin();  
        
    // inserting map pair using hint  
    mp.emplace_hint(it, 'b', 20);  
        
    cout << endl ;  
        
    // printing map pairs after insertion  
    cout << "The map pairs after 3rd insertion are : \n";  
        
    for (it1 = mp.begin(); it1!=mp.end(); ++it1)  
        cout << it1->first << "->" << it1->second << endl; 
    */

    return 0;
    
        
}