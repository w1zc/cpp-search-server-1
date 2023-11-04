#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "What is your name?"s << endl;
    string name;

    getline(cin, name);

    cout << "Hello "s << name << "!"s << endl;
    return 0;
}
