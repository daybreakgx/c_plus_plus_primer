#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <fstream>
#include <vector>
using std::vector;

#include <string>
using std::string;

void read_from_file(const string& file_in, const string& file_out)
{
    std::ifstream ifs(file_in);
    string line;
    vector<string> line_list;
    while(getline(ifs, line)) {
        line_list.push_back(line);
    } 

    std::ofstream ofs;
    ofs.open(file_out, std::ofstream::app);

    if(ofs) {
       for(auto s : line_list) {
           ofs << s << endl;
       } 
    } else {
        cout << "open file(" << file_out << ") failed." << endl;
    }
       

    return;
}

int main(int argc, char** argv)
{
    for(int index = 0; index != argc; ++index)
    {
        cout << "index: " << index << ", value: " << argv[index] << endl;
    }
    string file_in, file_out;
    if(argc < 3)
        cout << "usage: ./a.out file_in file_out" << endl;
    else
        file_in = string(argv[1]);
        file_out = string(argv[2]);

    read_from_file(file_in, file_out);

    return 0;
}
