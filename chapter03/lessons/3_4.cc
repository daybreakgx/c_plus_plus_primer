#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int main()
{
    string s("Hello world!!!");

    decltype(s.size()) punct_cnt = 0;

    for(auto c : s)
        if(ispunct(c))
            ++punct_cnt;
    cout << punct_cnt << " punctuation characters in '" << s << "'" << endl;

    return 0;
}
