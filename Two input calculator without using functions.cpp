#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "Enter two numbers:\n";
    cin >> x;
    cin >> y;
    
    int add, subtract, multiply, divide;
    add= x+y;
    subtract= x-y;
    multiply= x*y;
    divide= x/y;
    cout<< "1) add \n2) subtract \n3) multiply \n4) divide";
    
    int opt;
    cout << "\nEnter your choice:";
    cin >> opt;
    if(opt == 1)
    {
        cout<< add;
    }
    else if(opt == 2)
    {
        cout<< subtract;
    }
    else if(opt == 3)
    {
        cout << multiply;
    }
    else if(opt == 4)
    {
        cout  << divide;
    }
    return 0;
}
