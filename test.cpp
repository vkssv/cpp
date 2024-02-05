// you can use includes, for example:
// #include <algorithm>
#include<bits/stdc++.h> 
#include <vector>
#include <bits/stdc++.h>
#include<string>  
#include<map>
#include <sstream>
#include <stdio.h>
#include <regex>

using namespace std;



void printVector(vector<int> v) {

    for_each(v.begin(), v.end(), [](int i) { std::cout << i << " ";});
    cout << endl;

};

int main(void) {

    // vector<int> v {1, 3, 6, 4, 1, 2};
    //vector<int> v {1, 2, 3};
    vector<int> v {-1, -3};

    printVector(v);
    cout << endl;
    
    //sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool {return a > b; });

    //cout << "Sorted vector"<< endl;
    //printVector(v);

    //cout << "U vector"<< endl;
    //auto p = unique(v.begin(), v.end(), [](int a, int b) {return a == b; });
    
    //v.resize(distance(v.begin(), p));
    //printVector(v);

    /*
    int prev = *(v.begin());

    for(auto p = v.begin(); p != v.end(); p++) {

        if ((*p - prev) > 1) {
            cout << *p <<endl;
            return *p;

        }
        prev = *p;

    };
    cout << prev << endl;
    cout << "end" << *(v.end() -1) << endl;
    if (prev == *(v.end() -1) ) {
        if (prev < 0) {
            cout << 1 << endl;
            return 1;
        }
        cout << prev +1 << endl;
        return prev +1;
    }
    */

    


    cout << endl;

    return 0;

}