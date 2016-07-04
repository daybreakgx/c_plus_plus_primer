#include <iostream>
using std::cin; using std::cout; using std::endl;

#include <stdexcept>
using std::exception; using std::runtime_error;
using std::logic_error;
int main()
{
    int v1 = 0, v2 = 0;
    
    while(cin >> v1 >> v2) {
        try {
            if(v2 == 0)
                throw runtime_error("chu ling error");
            cout << v1 / v2 << endl;
        } catch (runtime_error err) {
            cout << "error found" << endl;
            cout << err.what() << endl;
        } catch (logic_error lerr) {
            cout << "logic error" << endl;
        } catch (exception exp) {
            cout << "exp found" << endl;
        } catch(...) {
            cout << "..." << endl;
        }
    }

    return 0;
}
