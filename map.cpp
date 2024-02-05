#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main()
{
    // Create a map of strings to integers
    map<string, int> mp;
 
    // Insert some values into the map
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
 
    // Get an iterator pointing to the first element in the
    // map
    map<string, int>::iterator it = mp.begin();
 
    // Iterate through the map and print the elements
    while (it != mp.end()) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
        ++it;
    }


    cout << "Map size " << mp.size() << endl;

    map<int, int> gquiz1;

    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
 
    // another way of inserting a value in a map
    gquiz1[7] = 10;

    map<int, int>::iterator itr;

    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); itr++) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;


    map<int,int> gquiz2(gquiz1.begin(), gquiz1.end());
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << "key:" << itr->first << " value: " << itr->second << '\n';
    }
    cout << endl;
 
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << "key:" << itr->first << " value: " << itr->second << '\n';
    }
    cout << endl;

    
    int num = gquiz2.erase(4);

    cout << "removed "<< num << endl;

    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << "key:" << itr->first << " value: " << itr->second << '\n';
    }
    cout << endl;

    const map<int, int> mp1 = {{6, 8}};
    
    auto it1 = mp1.lower_bound(6);
    cout << "The lower bound of key 2 is " << endl;
    cout << "===========>" << mp1.at(6) << endl;
    /*
    cout << (*it1).first << " " << (*it1).second << endl;

    //auto it2 = mp1.upper_bound(4); 

    cout << "The lower bound of key 4 iss ";
    cout << (*it2).first << " " << (*it2).second << endl;

    cout << "The number of fives key" << mp1.count(5) << endl;
    cout << "The number of ones key" << mp1.count(1) << endl;


    for (itr = mp1.begin(); itr != mp1.end(); ++itr) {
        cout << "key:" << itr->first << " value: " << itr->second << '\n';
    }
    cout << endl;


    map<string,string> lights;

    lights = {{"red", "stop"}, {"green", "go"}, {"yellow", "be ready"}};

    for(auto x: lights) {
      cout << x.first << "->" << 
              x.second << endl;
    }


    pair<string,string> arr[] = { make_pair("red", "stop"), make_pair("green", "go"), make_pair("yellow", "be ready")};

    int a_size = sizeof(arr)/ sizeof(arr[0]);

    map<string, string> LM(arr, arr + a_size);

    for(auto x: LM) {
        cout << x.first << "--->" << x.second << endl;
    };

    map<string, string> mm; 
    mm.insert(LM.begin(), LM.end()); // insert

    for(auto x: mm)
    {
        cout << x.first << "----->" <<  x.second <<endl;
    }

    map<string, string> mm1(mm); //copy

    for(auto x: mm1)
    {
        cout << x.first << "------->" <<  x.second <<endl;
    }

    map<string, string> mm2(mm1.begin(), mm1.end()); // via range

    for(auto x: mm2)
    {
        cout << x.first << "--------->" <<  x.second <<endl;
    }

    */









    





 
    return 0;
}