#include <iostream>
#include <string>

using std::string;
using std::cout; using std::endl;

int main()
{
    string s("some string");
    cout << s << endl;

    decltype(s.size()) index = s.size();
    while(index-- > 0) {
//        auto &c = s[index];
//        c = 'S';
          s[index] = 'S';
    }

    cout << s << endl;

    return 0;
}
