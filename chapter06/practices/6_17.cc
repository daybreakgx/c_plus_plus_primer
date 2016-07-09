#include <iostream>
using std::cout; using std::endl;
using std::cin;

#include <string>
using std::string;

bool has_upper(const string& s)
{
    for(auto c : s) {
        if(isupper(c))
            return true;
    }
    return false;
}

void to_upper(string& s)
{
    for(auto& c : s) {
        c = toupper(c);
    }
    return;
}

int main()
{
    string s;
    
    cin >> s;
    cout << "has upper char? " << has_upper(s) << endl;

    to_upper(s);
    cout << "to upper: " << s << endl;
    
    return 0;
}
