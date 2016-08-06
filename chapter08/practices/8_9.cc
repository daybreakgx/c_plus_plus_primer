#include <iostream>
using std::endl;using std::cout;

#include <string>
using std::string;

#include <sstream>

std::istream& read_from_stream(std::istream& is)
{
    string s;

    while(is >> s) {
        cout << s << endl;
    }

    is.clear();
    return is;
}

int main(int argc, char** argv)
{
    if(argc < 2) {
        cout << "usage: ./a.out input_string" << endl;
        return -1;
    }
    
    std::istringstream iss(argv[1]);
    if(!iss) {
        cout << "iss is failed" << endl;
        return -1;
    }
     
    read_from_stream(iss);
    return 0;
}
