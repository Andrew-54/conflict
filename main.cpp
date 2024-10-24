#include <iostream>
using namespace std;
int add(int a, int b);

int main()
{
    cout << "Hello, World\n";
    cout << "The sum of 3 and 4 is " << add(3,4) << endl;
    return 0;
}

int add(int a, int b)
{
    return a+b;
}