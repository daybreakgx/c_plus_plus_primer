#include <iostream>
using std::cout; using std::endl;

void swap(int* &a, int* &b)
{
    int * temp = a;
    a = b;
    b = temp;
    return; 
}

int main()
{
    int a = 10, b = 20;
    int* pa = &a, *pb = &b;

    cout << "a: " << pa << endl;
    cout << "b: " << pb << endl;

    swap(pa, pb);

    cout << "a: " << pa << endl;
    cout << "b: " << pb << endl;
 
    return 0;
}
