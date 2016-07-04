#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    unsigned cnt = 0;
    string s, s_next;
    cin >> s;
    ++cnt;
    while(cin >> s_next) {
        if(s == s_next) {
            ++cnt;
            break;
        } else {
            s = s_next;
            cnt = 1;
        } 
    }
    if(cnt == 1)
        cout << "not found" << endl;
    else
        cout << "found: " << s_next << endl;
    return 0;
}
