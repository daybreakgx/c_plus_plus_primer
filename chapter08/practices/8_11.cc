#include <iostream>
using std::cout; using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <sstream>
using std::istringstream;

#include <fstream>
using std::ifstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main(int argc, char** argv)
{
    string line, word;
    vector<PersonInfo> people;

    ifstream ifs(argv[1]);
    istringstream iss;

    while(getline(ifs, line)) {
        PersonInfo info;
        cout << "line: " << line << endl;
        iss.str(line);
        iss >> info.name;
        while(iss >> word) {
            info.phones.push_back(word);    
        } 
        people.push_back(info);
        iss.clear();
    }
 
    for(auto p : people) {
        cout << "name: " << p.name << endl;
        for(auto w : p.phones) {
            cout << "phone: " << w << endl; 
        }
    }
    return 0;
}
