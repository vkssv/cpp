#include <bits/stdc++.h>
using namespace std;

int main(void) {

    vector<int> v1 = {3, 1, 7, 9};
    vector<int> v2 = {10, 2, 7, 16, 9};

    auto pushinto = [&] (int m) {
        v1.push_back(m);
        v2.push_back(m);
    };

    pushinto(20);

    
    for(auto p = v1.begin(); p != v1.end(); p++) {
            cout << *p << endl;
    };
    
    int N = 5;

    vector<int>::iterator p = find_if(v1.begin(), v1.end(), [N](int i) { return i > N; });
    cout << "First num greater than 5 is " << *p << endl;

    //int count_x = count_if(v1.begin(), v1.end(), [N](int i) { return i >= N; });
    int count_x = count_if(v1.begin(), v1.end(), [N](int i) { if (i >= N) {cout << i << " is greater or eq than " << N << endl; return true; } else return false; });
    cout << "Greater or eq " << count_x << endl;
    

    return 0;

}