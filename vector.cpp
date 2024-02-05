#include <bits/stdc++.h>
#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 10; i++)
        g1.push_back(i);
 
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
 
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
 
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
 
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";


    cout << "\nSize : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
 
    // resizes the vector size to 4
    g1.resize(4);
 
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
 
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
 
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";

    cout << endl;

    vector<int> v;
 
    // fill the vector with 10 five times
    v.assign(7, 100);
 
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    cout << endl;
 
    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1] << endl;

    for(auto p = v.begin(); p != v.end(); p++) {
            cout << *p << endl;
    };

    // removes last element
    v.pop_back();
 
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
 
    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
 
    cout << "\nThe first element is: " << v[0] << endl;


    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    };
 
    // removes the first element
    v.erase(v.begin());
 
    cout << "\nThe first element is: " << v[0] << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    };

 
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0] << endl;
    for(auto p = v.begin(); p != v.end(); p++) {
            cout << *p << endl;
    };

    cout << endl;

    auto emplaced_p = v.emplace(v.begin() + 3, 77);
    v.emplace(emplaced_p + 2, 66);
    
    for(auto p = v.begin(); p != v.end(); p++) {
            cout << *p << endl;
    };
 
    // Inserts 20 at the end
    v.emplace_back(25);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1] << endl;

    for(auto p = v.begin(); p != v.end(); p++) {
        cout << *p << endl;
    };

    // erases the vector
    v.clear();
    cout << "\nVector size after clear(): " << v.size() << endl;
 
    // two vector to perform swap
    vector<int> v1, v2;
    int j = 0;
    cout << "V1" << endl;
    for (j = 1; j <= 3; j++)
        v1.push_back(j);
    
    cout << "j=" << j << endl;

    for(auto p = v1.begin(); p != v1.end(); p++) {
        cout << *p << endl;
    };

    cout << "V2" << endl;
    
    while(j <=5 ) {
        v2.push_back(j++);
    }

    cout << "j=" << j << endl;

    cout << endl;

    for(auto p = v2.begin(); p != v2.end(); p++) {
        cout << *p << endl;
    };
 
    /*
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    */
 
    // Swaps v1 and v2
    v1.swap(v2);
 
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    cout << endl << endl;

    vector<int> gx;
 
    for (int i = 1; i <= 10; i++)
        gx.push_back(i * 10);

    for (int i = 0; i < gx.size(); i++)
        cout << gx[i] << " ";

    cout << endl;

    auto z = gx[2];
    
    cout << "Reference operator [g] : g1[2] = " << z << "\n";
 
    int& kk = gx.at(4);
    
    cout << "at : g1.at(4) = " << kk << "\n";
 
    cout << "\nfront() : g1.front() = " << gx.front();
 
    cout << "\nback() : g1.back() = " << gx.back();
 
    // pointer to the first element
    int* pos = gx.data();
 
    cout << "\nThe first element is " << *pos;
    

    
    
 
    return 0;
}



/*
int main(void) {

    vector<int> v = { 1, 2, 3, 4, 5};
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << "\t";
    }
    cout << endl;

    return 0;
}

*/