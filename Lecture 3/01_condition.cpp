#include <iostream>
using namespace std;
int main ()
{
    int num;
    cin >> num;
    cout<< "Enter the Number: "<< num <<endl;

    if(num>0)
    {
        cout<< "Number is positive" <<endl;

    }
    else if(num<0)
    {
        cout << "Number is Negative "<< endl;

    }
    else 
    {
        cout << "Number is zero" << endl;
    }
}