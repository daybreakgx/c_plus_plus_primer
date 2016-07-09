#include <iostream>
using std::cout; using std::endl;

int main(int argc, char* argv[])
{
    for(int index = 0; index != argc; ++index)
        cout << "argc[" << index << "]: " << argv[index] << endl;

    return 0;
}
