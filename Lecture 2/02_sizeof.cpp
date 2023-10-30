#include <iostream>
using namespace std;
int main()
{
    // int ----> 4 byte
    int num = 70;
    cout << num << endl;
    cout << sizeof(num) << endl;
    
    // char ----> 1 byte
    char ch = 'k';
    cout << ch << endl;
    cout << sizeof(ch) << endl;


    // float ----> 4 byte
    float point = 1.93;
    cout << point << endl;
    cout << sizeof(point) << endl;

    // long ---> 4 byte
    long number = 23;
    cout<< number << endl;
    cout << sizeof(number) << endl;
}