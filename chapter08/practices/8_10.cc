#include<iostream>
using std::cin; using std::cout; using std::endl;

#include<fstream>
#include<sstream>
#include<string>
using std::string;

#include<vector>
using std::vector;

int main(int argc, char** argv)
{
    if(2 > argc) {
        cout << "usage: ./a.out file_name" << endl;
        return -1;
    }

    cout << "file name: " << argv[1] << endl;
    std::ifstream ifs(argv[1]);
    string line;
    vector<string> line_list;

    if(!ifs) {
        cout << "ifs is failed." << endl;
        return -1;
    }
    
    while(getline(ifs, line)) {
        line_list.push_back(line);
    }

    for(auto s : line_list) {
        std::istringstream iss(s);
        string word;
        while(iss >> word) {
            cout << word << endl;
        }
    }
    
    return 0;
}
