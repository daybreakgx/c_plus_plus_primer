#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    unsigned cnt_max = 0;
    string s_max;
    unsigned cnt = 0;
    string s, s_next;
    cin >> s;
    ++cnt;
    while(cin >> s_next) {
        if(s == s_next) {
            ++cnt;
        } else {
            if(cnt_max < cnt) {
                cnt_max = cnt;
                s_max = s;
            } 
            s = s_next;
            cnt = 1;
        } 
    }
    if(cnt == 1)
        cout << "not found" << endl;
    else
        cout << s_max << ": " << cnt_max << endl;
    return 0;
}
