#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{
    char ch;
    unsigned bcnt = 0, tcnt = 0, ncnt = 0;
    unsigned acnt = 0, icnt = 0, ocnt = 0, ecnt = 0;
    while(cin >> ch) {
        cout << "---" << ch << "---" << endl;
        switch(ch) {
            case 'a': case 'A':
                ++acnt;
                break;
            case 'i': case 'I':
                ++icnt;
                break;
            case 'o': case 'O':
                ++ocnt;
                break;
            case 'e': case 'E':
                ++ecnt;
                break;
            case ' ':
                ++bcnt;
                break;
            case '\t':
                ++tcnt;
                break;
            case '\n':
                ++ncnt; break;
        }
    }
    cout << "a: " << acnt << ", i: " << icnt << ", o: " << ocnt << ", e: " << ecnt << endl;
    cout << "space: " << bcnt << ", tab: " << tcnt << ", enter: " << ncnt << endl;
    return 0;
}
