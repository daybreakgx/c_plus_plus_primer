#include <iostream>
using std::endl;using std::cout;

#include <string>
using std::string;

std::istream& read_from_stream(std::istream& is)
{
    string s;

    while(is >> s) {
        cout << s << endl;
    }

    is.clear();
    return is;
}

int main()
{
    read_from_stream(std::cin);
    return 0;
}
