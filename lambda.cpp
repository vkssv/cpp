#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> v) {

    for_each(v.begin(), v.end(), [](int i) { std::cout << i << " ";});

}

int main(void) {

    vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};

    printVector(v);

    vector<int>::iterator p = find_if(v.begin(), v.end(), [](int i) {return i > 4;});

    cout << "First num greater than 4 ="<< *p << endl;
    
    sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool {return a > b; });

    cout << "Sorted vector"<< endl;
    printVector(v);


    int count_fives = count_if(v.begin(), v.end(), [](int i) { return (i ==5 );});

    cout << "Number of fives " << count_fives << endl;

    p = unique(v.begin(), v.end(), [](int a, int b) {return a == b; });

    v.resize(distance(v.begin(), p));
    printVector(v);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int f = accumulate(arr, arr +10, 1, [](int i, int j) { return i*j; });
    cout << "factorial " << f << endl;

    auto square = [](int i) { return i*i; };

    cout << "square " << square(5) << endl;

    

    return 0;
}