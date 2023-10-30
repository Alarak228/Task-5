#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int massInt[10] = { 1, 5, 10, 24, 38, 47, 7, 2147483647, 59, 10 };
    short massShort[10] = { 1, 5, 10, 24, 43, 32, 32000, 32, 23, 21323 };
    long massLong[10] = { 1, 5, 3, 1, 20, 43,  31, 54, 109, 54 };
    float massFloat[10] = { 1.42, 3.14, 20.24, 23.23, 20.20, 23.20, 50.12, 42.64, 0.12, 1000.01 };
    double massDouble[10] = { 23.2342, 12.13, 20.24, 33.532,25.3212, 70.13, 32.42, 54.12, 1023.234, 321.321 };
    char massChar[10] = { 'О', 'А', 'З', 'А', 'Ч', 'Е', 'М', 'К', 'И', 'Т' };
    bool massBool[10] = { true, false, false, true,false,true,true,true,false,false };

    
    cout << "[ + ] Массив INT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] massInt:" << "[" << i << "]" << "=" << massInt[i] << endl;
    }

    cout << endl;

    cout << "[ + ] Массив SHORT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] massShort" << "[" << i << "]" << " = " << massShort[i] << endl;
    }

    cout << endl;

    cout << "[ + ] Массив LONG:" << endl;
    for (int i = 0; i < 10; i++) { 
        cout << "[ + ] massLong" << "[" << i << "]" << " = " << massLong[i] << endl;
    }

    cout << endl;

    cout << "[ + ] Массив FLOAT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] massFloat" << "[" << i << "]" << " = " << massFloat[i] << endl;
    }

    cout << endl;

    cout << "[ + ] Массив DOUBLE:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] massDouble" << "[" << i << "]" << " = " << massDouble[i] << endl;
    }

    cout << endl;

    cout << "[ + ] Массив CHAR:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] massChar" << "[" << i << "]" << " = " << massChar[i] << endl;
    }

    cout << endl;

    cout << "[ + ] Массив BOOL:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] massBool" << "[" << i << "]" << " = " << massBool[i] << endl;
    }

}

