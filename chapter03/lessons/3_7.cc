#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;

int main()
{
    string s("some string");

    for(auto it = s.begin(); it != s.end() && !isspace(*it); it++) {
        *it = toupper(*it);
    }

    cout << s << endl;
    return 0;
}
