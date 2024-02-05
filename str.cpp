#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <regex>

using namespace std;

int main(void) {
    //char s[] = "Geeksforgeeks";

    //string x("XXXXXXX");

    //string y(7, 'v');

    //string z = "RRRRR";

    /**
    cout << s << endl;
    cout << x << endl;
    cout << y << endl;

    string from_user;

    cout <<"Enter String: ";
    //cin >> from_user;

    getline(cin, from_user);

    cout <<"String: " << from_user << endl;


    string xx = "AAAA\nBBB\nCC DDDD\rEE\nFFF\nIII HH\aH";


    stringstream str_obj(xx);

    string token;

    while(str_obj >> token) {
        cout << token << endl;
    }

    string ss = "ZZZHSJDHSJDHJSHZHSJHDJSHDJS JHSJDHSDHJSHDJSHD";

    cout << "SS len = " << ss.length() << endl;
    cout << "SS capacity = " << ss.capacity() << endl;
    ss.resize(10);
    cout << "SS after resize 10 = " << ss << " len "<< ss.length() << endl;
    ss.resize(100);
    cout << "SS after resize  100 = " << ss << " len "<< ss.length() <<endl;
    ss.shrink_to_fit();

    cout << "The capacity of string after using shrink_to_fit function is "<< ss.capacity() << endl;
    */

    string conf = "# Pf-fa\n \
            eric-data-name-service-pf-fa-domain:\n \
            nameServiceInstances:\n \
                - id: 1\n \
            eric-ran-bs-me:\n \
            managedElement:\n \
                id: 1\n \
                locationName: Kista,SWE\n \
            # CM Service\n \
            eric-ran-cm-service:\n \
            eric-cm-yang-provider:\n \
                service:\n \
                annotations:\n \
                    sharedVIPLabel: appss-cm-pm-fm\n \
                loadBalancerIP: 10.131.5.65\n \
            eric-data-document-database-pg:\n \
                postgresConfig:\n \
                huge_pages: true\n \
                resources:\n \
                postgres:\n \
                    limits:\n \
                    hugepages-2Mi: 1000Mi\n \
                    requests:\n \
                    hugepages-2Mi: 1000Mi\n \
            # Cell NR microservice, same number of instances as for RC Central above, and same instance id as above\n \
            eric-ran-cu-cp-cell-nr:\n \
            rcInstances:\n \
                - faDomain:\n \
                    host: eric-data-name-service-pf-fa-domain-1\n \
                    port: 31040\n \
                    tlsPort: 31041\n \
                id: rc-1 \
            ";
    
    std::vector<std::string> ports;
 
    std::stringstream ss(conf);
    std::string token;

    std::regex e (".*[Pp]ort:.*");


    while (std::getline(ss, token, '\n')) {

        
        //printf(">>> %s", token);
        cout << "token" << token << endl;
        if (std::regex_match (token,e)) {

            int pos = token.find(":");
 
            // Copy substring after pos
            string port = token.substr(pos + 1);
            //ports.push_back(port);

        }
    }

    //for_each(ports.begin(), ports.end(), [](string i) { std::cout << i << endl;});

    cout << ">>>> I/O FILE" << endl;

    ifstream fin;
    string line;
 
    // by default open mode = ios::in mode
    fin.open("values.yaml");
 
    // Execute a loop until EOF (End of File)
    while (getline(fin, line)) {
       
        // Print line (read from file) in Console
        //cout << line << endl;
        if (std::regex_match (line,e)) {

            int pos = line.find(":");
 
            // Copy substring after pos
            string port = line.substr(pos + 1);
            ports.push_back(port);

        }


    }
 
    // Close the file
    fin.close();

    for_each(ports.begin(), ports.end(), [](string i) { std::cout << i << endl;});


 
    
    


    return 0;

}