#include <iostream>

#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout; using std::cin; using std::endl;

int main()
{
    vector<string> sv;
    string s;
    while(cin >> s)
        for(auto &c : s)
            c = toupper(c);
        sv.push_back(s);

    for(auto s : sv)
        cout << s << endl;

    return 0;
}
