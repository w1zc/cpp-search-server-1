#include <iostream>
#include <string>
#include <map>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main()
{
    cout << "What is your name?"s << endl;
    string name;

    getline(cin, name);

    map<int, string> some_map;
    some_map.insert({5, "c++"});
    some_map.at(5);

    int x = sum(5, 10);

    cout << "Hello "s << name << "!"s << endl;
    return 0;
}
