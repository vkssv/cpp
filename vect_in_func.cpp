#include<bits/stdc++.h>  
using namespace std;
  
// The vect is passed by constant reference  
// and cannot be changed by this function.

struct Interval {
    int start, end;
};

void func(vector<int> vect)  
{  
    vect.push_back(30);   // Uncommenting this line would  
                            // below error  
    // "prog.cpp: In function 'void func(const std::vector<int>&)':  
    // prog.cpp:9:18: error: passing 'const std::vector<int>'  
    // as 'this' argument discards qualifiers [-fpermissive]"  
      
} 

bool compareInterval(Interval i1, Interval i2) {
    return (i1.start > i2.start);
}


void get_idx(vector<int> v, int val) {
    auto it = find(v.begin(), v.end(), val);

    if ( it != v.end()) {

        int idx = it - v.begin();
        cout << it - v.begin() << endl;
    } else {
        cout << "-1" << endl;
    }
}
  
int main()  
{  
    vector<int> vect;  
    vect.push_back(10);  
    vect.push_back(20);  

    for (int i = 0; i < vect.size(); i++)  
        cout << vect[i] << " ";
    cout << endl;  
    func(vect);

    for (int i = 0; i < vect.size(); i++)  
        cout << vect[i] << " ";
    cout << endl; 

    vect = {11, 2, 35, 4, 15, 26, 77, 83, 96, 1};


    sort(vect.begin(), vect.end());
    for (auto x : vect) 
        cout << x << " ";
    cout << endl; 

    sort(vect.begin(), vect.end(), greater<int>());
    for (auto x : vect) 
        cout << x << " ";
    cout << endl; 

    vector<Interval> v { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
    sort(v.begin(), v.end(), [](Interval i1, Interval i2) {return i1.start > i2.start;}); 

    cout << "Intervals sorted by start time : \n"; 
    for (auto x: v)
        cout << "[" << x.start << ", " << x.end << "] "; 
    
    cout << endl;

    vector<int> a = { 1, 44, 54, 71, 76, 12, 5 };
    for (auto x : a) 
        cout << x << " ";
    cout << endl; 

    
    reverse(a.begin(), a.end());

    for (auto x : a) 
        cout << x << " ";
    cout << endl; 

    cout << "MIN=" << *min_element(a.begin(), a.end()) << endl;
    cout << "MAX=" << *max_element(a.begin(), a.end()) << endl;



    get_idx(a, 71);






    // [](int i) {return i > 4;}
      
    return 0;  
}