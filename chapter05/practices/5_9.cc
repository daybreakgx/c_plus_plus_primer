#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    char ch;
    unsigned acnt = 0, icnt = 0, ocnt = 0, ecnt = 0;
    while(cin >> ch) {
        switch(ch) {
            case 'a':
                ++acnt;
                break;
            case 'i':
                ++icnt;
                break;
            case 'o':
                ++ocnt;
                break;
            case 'e':
                ++ecnt;
                break;
        }
    }
    cout << "a: " << acnt << ", i: " << icnt << ", o: " << ocnt << ", e: " << ecnt << endl;

    return 0;
}
