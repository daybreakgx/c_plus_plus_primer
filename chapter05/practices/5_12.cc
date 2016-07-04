#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    char ch;
    unsigned ffcnt = 0, ficnt = 0, flcnt = 0;
    while(cin >> ch) {
        switch(ch) {
            case 'f': {
                char next;
                cin >> next;
                switch(next) {
                    case 'f':
                        ++ffcnt; break;
                    case 'i':
                        ++ficnt; break;
                    case 'l':
                        ++flcnt; break;
                }
            }
        }
    }
    cout << "ff: " << ffcnt << ", fi: " << ficnt << ", fl: " << flcnt << endl;

    return 0;
}
