#include <bits/stdc++.h>
using namespace std;


int main(void) {

    vector<int> v = { 1, 2, 3, 4, 5};
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << "\t";
    }
    cout << endl;

    return 0;
}