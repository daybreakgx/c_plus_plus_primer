#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <fstream>
#include <vector>
using std::vector;

#include <string>
using std::string;

void read_from_file(const string& file_name)
{
    std::ifstream ifs(file_name);
    string line;
    vector<string> line_list;
    while(getline(ifs, line)) {
        line_list.push_back(line);
    } 
    cout << "print lines ..." << endl;
    for(auto s : line_list) {
        cout << s << endl;
    }
    return;
}

int main(int argc, char** argv)
{
    string file;
    if(argc < 2)
        cout << "usage: ./a.out file_name" << endl;
    else
        file = string(argv[1]);

    read_from_file(file);
    return 0;
}
