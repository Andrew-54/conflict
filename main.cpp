#include <iostream>
using namespace std;


int add(int a, int b);
void say(string);

int main()
{
    cout << "Greetings\n";
    cout << "Hello, World\n";
    say("hi");
    cout << "The sum of 3 and 4 is " << add(3,4) << endl;
    return 0;
}

void say(string s)
{
    cout << s << endl;
}


int add(int a, int b, int c)
{
    return a+b/c;
}
