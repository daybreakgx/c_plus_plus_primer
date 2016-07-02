#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <string>
using std::string;

int main()
{
    string s("some string");

    if(s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }

    cout << s << endl;
    return 0;
}
